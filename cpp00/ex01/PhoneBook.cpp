#include "PhoneBook.hpp"
#include "main.hpp"

PhoneBook::PhoneBook()
{
	this->contactCount = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds) {
	Contact contact(fn, ln, nn, pn, ds);
	this->contacts[this->contactCount % 8] = contact;
	this->contactCount++;
}

void	PhoneBook::showContact(int index) {
	Contact contact = this->contacts[index];
	std::cout << BLUE << "  Contact information:" << RESET << std::endl;
	std::cout << "    First name: " << contact.getFirstName() << std::endl;
	std::cout << "    Last name: " << contact.getLastName() << std::endl;
	std::cout << "    Nickname: " << contact.getNickname() << std::endl;
	std::cout << "    Phone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "    Darkest secret: " << contact.getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::printContacts() {
	int i = 0;
	int l = 0;
	int width = 10;

	if (this->contactCount == 0) {
		std::cout << RED << "No contacts to display." << RESET << std::endl;
		return ;
	}

	if (this->contactCount < 8)
		l = this->contactCount;
	else
		l = 8;

	std::cout << "---------------------------------------------" << std::endl;
	while (i < l) {
		std::cout << "|" << std::setw(width) << std::right << i;
		std::cout << "|" << std::setw(width) << std::right << (this->contacts[i].getFirstName().length() > 10 ? this->contacts[i].getFirstName().substr(0, 9) + "." : this->contacts[i].getFirstName());
		std::cout << "|" << std::setw(width) << std::right << (this->contacts[i].getLastName().length() > 10 ? this->contacts[i].getLastName() .substr(0, 9) + "." : this->contacts[i].getLastName());
		std::cout << "|" << std::setw(width) << std::right << (this->contacts[i].getNickname().length() > 10 ? this->contacts[i].getNickname()  .substr(0, 9) + "." : this->contacts[i].getNickname());
		std::cout << "|" << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}

int		PhoneBook::getContactCount() {
	return (this->contactCount);
}