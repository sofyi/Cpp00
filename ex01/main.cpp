/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:44:54 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/08 21:43:52 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	check_input(std::string str)
{
	int i;

	i = 0;
	while (str.size)
		i++;
	return (1);
}
int	start_phon(std::string *input, PhoneBook pone)
{
	while (1) 
	{ 
		std::cout<< "ENTER : ADD, SEARCH, EXIT"<<std::endl;
		std::getline(std::cin, *input);
		if (!(*input).compare("EXIT") || std::cin.eof())
			break;
		if ((*input).compare("ADD") && check_input(*input))
			std::cout<< *input<<std::endl;
		// 	ft_add_contact();
		// else if ((*input).compare("SEARCH"))
		// 	ft_search();
		std::cout << "coco inoo  "<<*input << std::endl;
	}
	if (std::cin.eof())
	{
		std::cout<< "get end of file";
		return (1);	
	}
	return (0);
}

int main()
{
	std::string input;
	PhoneBook pone;

	if (start_phon(&input, pone))
		return (1);
}
