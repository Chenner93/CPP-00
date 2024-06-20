#include <iostream>
#include <string>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

static bool	check_syntax_index(PhoneBook &book)
{
	std::string	str;

	std::cout << "Which index ?" << std::endl;
	std::getline(std::cin, str);
	if (str.length() > 1 || str.length() == 0 || atoi(str.c_str()) > 7)
	{
		std::cout << "Expected index between 0 and 7" << std::endl;
		return (check_syntax_index(book));
	}
	else if (book.is_empty(atoi(str.c_str())) == true)
	{
		std::cout << "Slot empty" << std::endl;
		return (false);	
	}
	else
		book.print_one_full_data(atoi(str.c_str()));
	return (true);
}

int main(void)
{
	PhoneBook	book;
	std::string	line;

	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, line);
		if (std::cin.eof())
			return (0);
		if (line.compare("EXIT") == 0)
			break ;
		else if (line.compare("ADD") == 0)
		{
			book.get_info();
		}
		else if (line.compare("SEARCH") == 0)
		{
			book.aff_info();
			check_syntax_index(book);
		}
		else
		{
			std::cout << "Expected argument -> EXIT" << std::endl;
			std::cout << "                  -> ADD" << std::endl;
			std::cout << "                  -> SEARCH" << std::endl;

		}
	}
	return (0);
}