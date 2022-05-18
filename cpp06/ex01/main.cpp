#include "main.hpp"

int main()
{
    Data    *obj = new Data;

    obj->one = "Lilo";
    obj->two = "Stitch";

    std::cout << "obj: " << obj << std::endl;
    std::cout << "obj->one: " << obj->one << std::endl;
    std::cout << "obj->two: "<< obj->two << std::endl;

    uintptr_t objSerialize = serialize(obj);
    std::cout << "objSerialize: " << objSerialize << std::endl;

    Data *objDeserialize = deserialize(objSerialize);
    std::cout << "objDeserialize: " << objDeserialize << std::endl;
    std::cout << "objDeserialize->one: " << objDeserialize->one << std::endl;
    std::cout << "objDeserialize->two: " << objDeserialize->two << std::endl;

    delete objDeserialize;
    return (0);
}

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

