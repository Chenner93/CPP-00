








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
		void	afficher(void);
		void	save_info(std::string first_name, std::string last_name, std::string nickname,
			std::string darkest_secret, std::string num);
		void	aff_contact(void);
};

#endif