#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)  {
	std::cout << "Constructor Contact called" << std::endl;
};

Contact::~Contact(void)  {
	std::cout << "Destructor Contact called" << std::endl;
};

void	Contact::afficher(void)
{
	std::cout << this->first_name << std::endl;
};

void	Contact::save_info(std::string first_name, std::string last_name, std::string nickname, std::string darkest_secret, std::string num)
{
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->darkest_secret = darkest_secret;
	this->num = num;
};

void	Contact::print_contact(std::string to_print) {
	std::string	sub_string;


	if (to_print.length() > 9)
	{
		sub_string = to_print.substr(0, 9) + ".";
		std::cout << std::setw(10) << sub_string;
	}
	else
		std::cout << std::setw(10) << to_print;
}

void	Contact::aff_contact(void) {
	this->print_contact(this->first_name);
	std::cout << std::setw(1) << "|";
	this->print_contact(this->last_name);
	std::cout << std::setw(1) << "|";
	this->print_contact(this->nickname);
};