#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contactCount = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact(Contact contact) {
	this->contacts[this->contactCount % 8] = contact;
}

void	PhoneBook::searchContact(Contact contact) {

}