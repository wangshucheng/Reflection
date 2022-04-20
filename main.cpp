#include <iostream>
#include "gen/vector3_gen.h"

using namespace std;

int main() {
    TypeWrapperRegister_Vector3();

    void* v = new Vector3();

    auto object_instance = Pilot::Reflection::ReflectionInstance(
            Pilot::Reflection::TypeMeta::newMetaFromName("Vector3"),
            v);
    Pilot::Reflection::FieldAccessor* fields;
    int                        fields_count = object_instance.m_meta.getFieldsList(fields);
    for (size_t index = 0; index < fields_count; index++)
    {
        auto fields_count = fields[index];
        auto fieldName = fields_count.getFieldName();
        if(fieldName == "x")
        {
            float value = 123;
            fields_count.set(v, &value);
            cout<<"yes"<<fieldName<<endl;
        }
        cout<< "FieldName: " << fieldName << "    FieldName:  " << fields_count.getFieldTypeName()
            << "     " << *(float *)(fields_count.get(v)) << endl;
    }


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
