#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

static bool	syntax_name(std::string str_a, std::string str_b, std::string str_c, std::string str_d, std::string str_e)
{
	if (str_a.empty() || str_b.empty() || str_c.empty() || str_d.empty() || str_e.empty() )
		return (false);
	for (char a : str_a) {
		if (std::isalpha(a) == false && a != '-')
			return (false);
	}
	for (char b : str_b) {
		if (std::isalpha(b) == false && b != '-')
			return (false);
	}
	for (char c : str_c) {
		if (std::isalpha(c) == false && std::isdigit(c) == false)
			return (false);
	}
	for (char d : str_d) {
		if (std::isalpha(d) == false && std::isdigit(d) == false)
			return (false);
	}
	for (char e : str_e) {
		if (std::isdigit(e) == false)
			return (false);
	}
	return (true);
}

PhoneBook::PhoneBook( void ) {

	std::cout << "Contrustor called" << std::endl;
};

PhoneBook::~PhoneBook( void ) {
	std::cout << "Destrutor called" << std::endl;
};

void	PhoneBook::get_info( void ) {
	
	static int	i = 0;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	darkest_secret;
	std::string	num;
	
	std::cout << "What is his/her first name?" << std::endl;
	std::getline(std::cin, first_name);
	
	std::cout << "What is his/her last name?" << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "What is his/her nickname?" << std::endl;
	std::getline(std::cin, nickname);
	std::cout << "What is his/her darkest secret?" << std::endl;
	std::getline(std::cin, darkest_secret);
	std::cout << "What is his/her phone number?" << std::endl;
	std::getline(std::cin, num);
	if (syntax_name(first_name, last_name, nickname, darkest_secret, num) == true)
	{
		this->contacts[i % 8].save_info(first_name, last_name, nickname, darkest_secret, num);
		i++;
	}
	else
		std::cout << "Syntax error" << std::endl;
};

void PhoneBook::aff_info( void ) {

	std::cout << std::setw(10) << "INDEX";
	std::cout << std::setw(1) << "|";
	std::cout << std::setw(10) << "FIRSTNAME";	
	std::cout << std::setw(1) << "|";
	std::cout << std::setw(10) << "LASTNAME";	
	std::cout << std::setw(1) << "|";
	std::cout << std::setw(10) << "NICKNAME";	
	std::cout << std::endl;

	for (int i = 0; i < 8; i++) {
		std::cout << std::setw(10) << i;
		std::cout << std::setw(1) << "|";
		this->contacts[i].print_contacts();
		std::cout << std::endl;
	}
};

bool PhoneBook::is_empty(int index) {
	return (this->contacts[index].is_empty());
};

void PhoneBook::print_one_full_data(int index) {
	this->contacts[index].print_the_contact();
}