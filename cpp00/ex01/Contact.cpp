#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string fname, std::string lname, std::string nname, std::string number, std::string secret)
{
	this->firstName = fname;
	this->lastName = lname;
	this->nickname = nname;
	this->phoneNumber = number;
	this->darkestSecret = secret;
}

Contact::~Contact()
{
}

std::string	Contact::getFirstName()
{
	return (this->firstName);
}

std::string	Contact::getLastName()
{
	return (this->lastName);
}

std::string	Contact::getNickname()
{
	return (this->nickname);
}

std::string	Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}
