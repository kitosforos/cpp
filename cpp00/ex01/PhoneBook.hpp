#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
private:
	Contact		contacts[8];
	int			contactCount;
public:
	PhoneBook();
	~PhoneBook();
	void		addContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
	void		showContact(int index);
	void 		printContacts();
	int			getContactCount();
};


#endif