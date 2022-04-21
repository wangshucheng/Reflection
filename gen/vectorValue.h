//
// Created by wp on 2022/4/21.
//

#ifndef REFLECTION_VECTORVALUE_H
#define REFLECTION_VECTORVALUE_H

#include "../core/Vector3.h"
#include "../reflection/reflection.h"

namespace TypeFieldReflectionOparator{
    class TypeVectorValueOperator {
    public:
        static const char* getClassName(){ return "VectorValue";}

        static const char* getFieldName_id(){ return "id";}
        static const char* getFieldTypeName_id(){ return "int";}
        static void set_id(void* instance, void* field_value){ static_cast<VectorValue*>(instance)->id = *static_cast<int*>(field_value);}
        static void* get_id(void* instance){ return static_cast<void*>(&(static_cast<VectorValue*>(instance)->id));}
        static bool isArray_id(){ return 0;}
    };
}
void TypeWrapperRegister_VectorValue(){
    Pilot::filed_function_tuple* f_field_function_tuple_x=new Pilot::filed_function_tuple(
            &TypeFieldReflectionOparator::TypeVectorValueOperator::set_id,
            &TypeFieldReflectionOparator::TypeVectorValueOperator::get_id,
            &TypeFieldReflectionOparator::TypeVectorValueOperator::getClassName,
            &TypeFieldReflectionOparator::TypeVectorValueOperator::getFieldName_id,
            &TypeFieldReflectionOparator::TypeVectorValueOperator::getFieldTypeName_id,
            &TypeFieldReflectionOparator::TypeVectorValueOperator::isArray_id);
    Pilot::Reflection::TypeMetaRegisterinterface::registerToFieldMap("VectorValue", f_field_function_tuple_x);
}


#endif //REFLECTION_VECTORVALUE_H
