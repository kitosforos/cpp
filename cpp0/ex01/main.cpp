#include "PhoneBook.hpp"
#include "main.hpp"
#include <iostream>
#include <string>

int main()
{
	std::string command;
	PhoneBook phoneBook;

	std::cout << BLUE << "Welcome to the PhoneBook!" << RESET << std::endl << std::endl;
	std::cout << "You have the following commands:" << std::endl << std::endl;
	std::cout << "--> " << YELLOW << "ADD" << RESET << ": Add a new contact to the PhoneBook" << std::endl;
	std::cout << "--> " << GREEN << "SEARCH" << RESET << ": Search for a contact in the PhoneBook" << std::endl;
	std::cout << "--> " << RED << "EXIT" << RESET <<": Exit the PhoneBook" << std::endl << std::endl;
	std::cout << RED << "[!!!] " << RESET << "It is case sensitive" << std::endl << std::endl;

	std::cout << "Please enter a command > ";
	std::cin >> command;

	while (command.compare("EXIT") != 0)
	{
		if (command.compare("SEARCH") == 0)
		{
			std::cout << "estamos en SEARCH" << std::endl;
		}
		else if (command.compare("ADD") == 0)
		{
			std::cout << "estamos en ADD" << std::endl;
		}
		else
		{
			std::cout << "Invalid command. Please try again." << std::endl;
		}
		std::cout << "Please enter a command > ";
		std::cin >> command;
	}
	std::cout << "Goodbye!" << std::endl;
}