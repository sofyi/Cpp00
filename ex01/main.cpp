/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:44:54 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/10 11:12:50 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// int	check_input(std::string str)
// {
// 	int i;

// 	i = 0;
// 	std::cout<< "heeer" <<std::endl;
// 	while ((i < str.size() && isspace(str[i])) ||
// 		 (i < str.size() && isupper(str[i])))
// 		i++;
// 	while (i < str.size() && isspace(str[i]))
// 		i++;
// 	std::cout<< "this var: " << str.size() << std::endl;
// 	if (i == str.size())
// 		return (0);
// 	return (1);
// }
int	ft_add_contact(std::string , PhoneBook pone)
{
	std::string in;
	
	while (1)
	{
		cout<<"set First name: ";
		std:getline(std::cin, in);
		if (std::cin)
	}
}
int	start_phon(std::string *input, PhoneBook pone)
{
	while (1) 
	{ 
		std::cout<< "ENTER : ADD, SEARCH, EXIT"<<std::endl;
		std::getline(std::cin, *input);
		if (!(*input).compare("EXIT") || std::cin.eof())
			break;
		if (!(*input).compare("ADD"))
		 	ft_add_contact(*input, pone);
		// else if !((*input).compare("SEARCH"))
		// 	ft_search();
		std::cout << "coco inoo  "<<*input << std::endl;
	}
	if (std::cin.eof())
	{
		std::cout<< "get eof";
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
