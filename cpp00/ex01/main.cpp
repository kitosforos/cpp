#include "PhoneBook.hpp"
#include "main.hpp"
#include <iostream>
#include <string>

int main()
{
	std::string command;
	std::string fn;
	std::string ln;
	std::string nn;
	std::string pn;
	std::string ds;
	std::string index;
	PhoneBook phoneBook;

	std::cout << BLUE << "Welcome to the PhoneBook!" << RESET << std::endl << std::endl;
	std::cout << "You have the following commands:" << std::endl << std::endl;
	std::cout << "--> " << YELLOW << "ADD" << RESET << ": Add a new contact to the PhoneBook" << std::endl;
	std::cout << "--> " << GREEN << "SEARCH" << RESET << ": Search for a contact in the PhoneBook" << std::endl;
	std::cout << "--> " << RED << "EXIT" << RESET <<": Exit the PhoneBook" << std::endl << std::endl;
	std::cout << RED << "[!!!] " << RESET << "It is case sensitive" << std::endl << std::endl;

	std::cout << "Please enter a command > ";
	std::getline(std::cin, command);

	while (command.compare("EXIT") != 0)
	{
		if (command.compare("SEARCH") == 0)
		{
			std::cout << BLUE << "List of contacts..." << RESET <<std::endl;
			phoneBook.printContacts();
			std::cout << "Please enter the index of the contact you would like to view > ";
			std::getline(std::cin, index);
			if (index.length() == 1 && index[0] >= '0' && index[0] <= '7' && index[0] - '0' < phoneBook.getContactCount())
				phoneBook.showContact(std::stoi(index));
			else
				std::cout << RED << "Invalid index." << std::endl;
		}
		else if (command.compare("ADD") == 0)
		{
			std::cout << BLUE << "   Adding a new contact..." << RESET << std::endl;
			std::cout << "     Enter first name > ";
			std::getline(std::cin, fn);
			std::cout << "     Enter last name > ";
			std::getline(std::cin, ln);
			std::cout << "     Enter nickname > ";
			std::getline(std::cin, nn);
			std::cout << "     Enter phone number > ";
			std::getline(std::cin, pn);
			std::cout << "     Enter darkest secret > ";
			std::getline(std::cin, ds);
			phoneBook.addContact(fn, ln, nn, pn, ds);
			std::cout << GREEN << "   Contact added!" << RESET << std::endl;
		}
		else
		{
			std::cout << "Invalid command. Please try again." << std::endl;
		}
		std::cout << "Please enter a command > ";
		std::getline(std::cin, command);
	}
	std::cout << BLUE << "Goodbye!" << std::endl;
}