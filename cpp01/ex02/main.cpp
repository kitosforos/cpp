#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "String address: " << &str << std::endl;
	std::cout << "Pointer address: " << ptr << std::endl;
	std::cout << "Reference address: " << &ref << std::endl;

	std::cout << "String: " << str << std::endl;
	std::cout << "Pointer: " << *ptr << std::endl;
	std::cout << "Reference: " << ref << std::endl;


}