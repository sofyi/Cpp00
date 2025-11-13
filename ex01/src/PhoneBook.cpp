/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:17:50 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/08 21:43:30 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includs/PhoneBook.hpp"
#include <iomanip>
PhoneBook::PhoneBook()
{
	IndexContact = -1;
}

int checkData(std::string input)
{
	std::string::const_iterator c;

	if (input.empty())
		return (std::cout<< "input empty" << std::endl,1);
	c = input.begin();
	while (c != input.end())
	{
		if (std::isspace(static_cast<unsigned char>(*c)))
		{
			std::cout<< "erorr name";
			return (1);
		}
		c++;	
	}
	return (0);
}
int	Check(std::string input)
{
	unsigned int i;
	std::string str;

	
	i = 0;
	while (i < input.size())
	{
		if (input[i] > 32)
			str += input.data()[i];
		i++;
	}
	if (str.empty())
		return (1);
	return (0);
}
void PhoneBook::AddContact()
{
	std::string input;

	while (true)
	{
		std::cout<<"Enter First name :";
		if (!std::getline(std::cin, input))
			break;
		if (checkData(input))
			continue;
	}
}
// void	PhoneBook::SerchContact()
// {

// }
// void	PhoneBook::PrintData()
// {

// }	
