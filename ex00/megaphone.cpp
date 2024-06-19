/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckenaip <ckenaip@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:09:36 by ckenaip           #+#    #+#             */
/*   Updated: 2024/05/23 13:02:44 by ckenaip          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; av[i]; i++)
	{
		for(int y = 0; av[i][y]; y++)
			std::cout << (char)std::toupper(av[i][y]);
	}
	std::cout << std::endl;
	return (0);
}
