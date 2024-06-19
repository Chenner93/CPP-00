








#include <iostream>
#include <string>
#include <string.h>
#include <unistd.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
	PhoneBook	book;
	std::string	line;
	while (1)
	{
		std::getline(std::cin, line);
		// std::cout << line << std::endl;
		if (line.compare("END") == 0)
			break ;
		else if (line.compare("ADD") == 0)
		{
			PhoneBook::get_info(&book);
		}
		else if (line.compare("SEARCH") == 0)
		{
		}
	}
	return (0);
}