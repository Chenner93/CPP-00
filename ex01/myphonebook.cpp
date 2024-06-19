








#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ) {

	std::cout << "Contrustor called" << std::endl;
};

PhoneBook::~PhoneBook( void ) {
	std::cout << "Destrutor called" << std::endl;
};

void	PhoneBook::get_info(PhoneBook *book) {
	
	static int	i;
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
	std::cout << "What is his/her darkest secret?\nTell us EVERYTHING !!!" << std::endl;
	std::getline(std::cin, darkest_secret);
	std::cout << "And finally, do you have an 06 ? ;D ;D ;D !" << std::endl;
	std::getline(std::cin, num);
	// save_info()
}