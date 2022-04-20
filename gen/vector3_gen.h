//
// Created by wp on 2022/4/19.
//

#ifndef CMAKETEST_VECTOR3_GEN_H
#define CMAKETEST_VECTOR3_GEN_H

#include "../core/Vector3.h"
#include "../reflection/reflection.h"

namespace TypeFieldReflectionOparator{
    class TypeVector3Operator {
    public:
        static const char* getFieldName(){return "x";}
        static const char* getFieldTypeName_x(){return "float";}
        static void set_x(void* instance, void* field_value)
            { static_cast<Vector3*>(instance)->x = *static_cast<float*>(field_value);}
        static void* get_x(void* instance)
            { return static_cast<void*>(&(static_cast<Vector3*>(instance)->x));}

        static const char* getClassName(){ return "Vector3";}
        static bool isArry_x(){ return 0;}
    };

    void TypeWrapperRegister_Vector3(){
//        Pilot::filed_function_tuple* f_field_function_tuple_x = new Pilot::filed_function_tuple(
//                &TypeFieldReflectionOparator::TypeVector3Operator::set_x,
//                &TypeFieldReflectionOparator::TypeVector3Operator::get_x,
//                &TypeFieldReflectionOparator::TypeVector3Operator::getClassName,
//                &TypeFieldReflectionOparator::TypeVector3Operator::getFieldName,
//                &TypeFieldReflectionOparator::TypeVector3Operator::getFieldTypeName_x,
//                &TypeFieldReflectionOparator::TypeVector3Operator::isArry_x
//        );
//        Pilot::Reflection::TypeMetaRegisterinterface::registerToFieldMap("Vector3", f_field_function_tuple_x);
    }
}




#endif //CMAKETEST_VECTOR3_GEN_H
