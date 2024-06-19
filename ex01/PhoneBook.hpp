#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	private:
	
		Contact	contacts[8];

	public:
		
		PhoneBook( void );
		~PhoneBook( void );
		void	get_info();
		void	aff_info();
};

#endif

// std::getline();
// void	PhoneBook::get_info(void) {

// 	static unsigned int	i = 0;

// 	std::string	first_name;
// 	std::string	last_name;
// 	std::string	nickname;
// 	std::string	darkest_secret;
	
// 	std::cout << "What is the first name?" << std::endl;
// 	std::cin >> first_name;
// 	std::cout << "What is the last name?" << std::endl;
// 	std::cin >> last_name;
// 	std::cout << "What is the nickname?" << std::endl;
// 	std::cin >> nickname;
// 	std::cout << "What is the darkest secret?" << std::endl;
// 	std::cin >> darkest_secret;
	
// 	// by_name[i % 8];
// 	// std::cout << first_name  << std::endl;
// 	// std::cout << last_name  << std::endl;
// 	// std::cout << nickname  << std::endl;
// 	// std::cout << darkest_secret  << std::endl;
// };
