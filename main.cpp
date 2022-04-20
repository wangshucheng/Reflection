#include <iostream>
#include "gen/vector3_gen.h"

int main() {
    TypeFieldReflectionOparator::TypeWrapperRegister_Vector3();

    auto object_instance = Pilot::Reflection::ReflectionInstance(
            Pilot::Reflection::TypeMeta::newMetaFromName("Vector3"),
            new Vector3());

    //TestFun();


    std::cout << "Hello, World!" << std::endl;
    return 0;
}
