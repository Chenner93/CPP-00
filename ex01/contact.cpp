








#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)  {
	std::cout << "Constructor Contact called" << std::endl;
};

Contact::~Contact(void)  {
	std::cout << "Destructor Contact called" << std::endl;
};

void	Contact::afficher(void)
{
	std::cout << "test" << std::endl;
};