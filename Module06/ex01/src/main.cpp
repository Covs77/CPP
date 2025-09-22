#include "Serializer.hpp"
#include <iostream>

int main()
{
	std::cout << "\033[032;1m\n🔧 Serializer Test" << std::endl;
	std::cout << "=====================\033[0m" << std::endl;

	Data	original;

	original.setName("Cova");
	

	std::cout << "\033[033;1mOriginal Data:\033[0m" << std::endl;
	std::cout << "Name: " << original.getName() << std::endl;
	std::cout << "Address: " << &original << std::endl;

	std::cout << "\033[033;1m\nTEST 1: Normal case\033[0m";
	uintptr_t	serialized = Serializer::serialize(&original);
	std::cout << "\033[035;1m\nSerialization...\033[0m" << std::endl;
	std::cout << "Address converted to integer: " << serialized << std::endl;

	Data*	deserializedPtr = Serializer::deserialize(serialized);
	std::cout << "\033[035;1m\nDeserialization...\033[0m" << std::endl;
	std::cout << "Restored address: " << deserializedPtr << std::endl;

	std::cout << "\033[033;1m\nTest Result:\033[0m" << std::endl;
	if (deserializedPtr == &original)
	{
		std::cout << "Data: " << deserializedPtr->getName() 
				  << std::endl;
		std::cout << "\033[035;1mSUCCESS: Addresses match!\033[0m" << std::endl;
	}
	else
		std::cout << "FAILURE: Addresses don't match!" << std::endl;
	return (0);
}