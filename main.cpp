#include <iostream>
#include "gen/vector3_gen.h"
#include "gen/vectorValue.h"

using namespace std;

void printInstance(Pilot::Reflection::ReflectionInstance& rinstance, void* instance)
{
    Pilot::Reflection::FieldAccessor* fields;
    int fields_count = rinstance.m_meta.getFieldsList(fields);

    for (size_t index = 0; index < fields_count; index++)
    {
        auto fields_count = fields[index];
        auto fieldName = fields_count.getFieldName();
        cout<< "FieldName: " << fieldName << "    FieldName:  " << fields_count.getFieldTypeName()
            << "     " << *(float *)(fields_count.get(instance)) << endl;
    }
}

void travelInstance(Pilot::Reflection::ReflectionInstance& rinstance, void* instance)
{
    Pilot::Reflection::ReflectionInstance* reflection_instance;
    int count = rinstance.m_meta.getBaseClassReflectionInstanceList(reflection_instance, rinstance.m_instance);
    for (int index = 0; index < count; index++)
    {
        travelInstance(reflection_instance[index], instance);
    }
    printInstance(rinstance, instance);
}

int main() {
    TypeWrapperRegister_VectorValue();
    TypeWrapperRegister_Vector3();

    void* v = new Vector3();
    auto object_instance = Pilot::Reflection::ReflectionInstance(
            Pilot::Reflection::TypeMeta::newMetaFromName("Vector3"),
            v);

    travelInstance(object_instance, v);

    float x = 123;
    object_instance.m_meta.getFieldByName("x").set(v, &x);
    travelInstance(object_instance, v);
    return 0;
}

//if(fieldName == "x")
//{
//float value = 123;
//fields_count.set(instance, &value);
//cout<<"yes"<<fieldName<<endl;
//}