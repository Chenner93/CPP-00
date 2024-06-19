#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

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
	std::cout << "What is his/her phone number" << std::endl;
	std::getline(std::cin, num);
	this->contacts[i % 8].save_info(first_name, last_name, nickname, darkest_secret, num);
	i++;
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
		this->contacts[i].aff_contact();
		std::cout << std::endl;
	}
};