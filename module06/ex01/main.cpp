#include <iostream>
#include "Serializer.hpp"

int main() {
    Data data;
    data.id = 42;
    data.name = "Antônio";
    data.value = 3.14f;

    std::cout << "--- original data" << std::endl;
    std::cout << "address: " << &data << std::endl;
    std::cout << "data: id=" << data.id << ", name=" << data.name << ", value=" << data.value << std::endl;

    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "\n--- serialized" << std::endl;
    std::cout << "uintptr_t value: " << raw << std::endl;

    Data* deserializedPtr = Serializer::deserialize(raw);
    std::cout << "\n--- deserialized" << std::endl;
    std::cout << "address: " << deserializedPtr << std::endl;

    if (deserializedPtr == &data) {
        std::cout << "\nsuccess: pointers match" << std::endl;
        std::cout << "data: id=" << deserializedPtr->id << ", name=" << deserializedPtr->name << ", value=" << deserializedPtr->value << std::endl;
    }
    else {
        std::cout << "\nerror: pointers do not match" << std::endl;
        return 1;
    }

    return 0;
}
