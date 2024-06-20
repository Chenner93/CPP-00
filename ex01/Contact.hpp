#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class	Contact
{
	private:
	
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		darkest_secret;
		std::string		num;
	
	public:
		
		Contact(void);
		~Contact(void);
		void	afficher(int index);
		void	save_info(std::string first_name, std::string last_name, std::string nickname,
			std::string darkest_secret, std::string num);
		void	print_contacts(void);
		void	print_contact(std::string to_print);
		bool	is_empty();
		void	print_the_contact();
};

#endif