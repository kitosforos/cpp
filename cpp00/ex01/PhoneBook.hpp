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
	void		addContact(Contact contact);
	void		searchContact(Contact contact);
};


#endif