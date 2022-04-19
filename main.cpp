#include <iostream>
#include "gen/vector3_gen.h"

int main() {
    TypeWrapperRegister_Vector3();

//    auto object_instance = Pilot::Reflection::ReflectionInstance(
//            Pilot::Reflection::TypeMeta::newMetaFromName("Vector3"),
//            new Vector3());



    std::cout << "Hello, World!" << std::endl;
    return 0;
}
