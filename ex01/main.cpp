#include <iostream>
#include <string>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
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