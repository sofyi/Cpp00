/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:17:50 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/13 18:09:41 by slamhaou         ###   ########.fr       */
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
		return (std::cout<< " << input is empty >>" << std::endl, 1);
	c = input.begin();
	while (c != input.end())
	{
		if (std::isspace(static_cast<unsigned char>(*c)))
			return (std::cout<< "❌ erorr syntax ❌"<<std::endl, 1);
		c++;	
	}
	return (0);
}

std::string	GetData(std::string msg)
{
	std::string input;
	
	if (std::cin.eof())
		return (input);
	while (true)
	{
		std::cout<< msg;
		if (!std::getline(std::cin, input))
			break;
		if (checkData(input))
			continue;
		break;
	}
	return (input);
}
void PhoneBook::AddContact()
{
	std::string input;

	IndexContact++;
	std::cout<< "this is index : " << IndexContact << std::endl;
	input = GetData("Enter First Name :");
	if (!std::cin.eof())
		Contacs[IndexContact % 8].SetFirstName(input);
	input = GetData("Enter Last Name :");
	if (!std::cin.eof())
		Contacs[IndexContact % 8].SetLastName(input);
	input = GetData("Enter Nick Name :");
	if (!std::cin.eof())
		Contacs[IndexContact % 8].SetNicName(input);
	input = GetData("Enter Phone Number :");
	if (!std::cin.eof())
		Contacs[IndexContact % 8].SetPoneNumber(input);
	input = GetData("Enter Darkest Secret :");
	if (!std::cin.eof())
			Contacs[IndexContact % 8].SetDarkestSecret(input);
		
}
static void	PrintLin(std::string data)
{
	if (data.length() > 10)
		std::cout<< std::setw(9) << data.substr(0, 9) << ".|";
	else
		std::cout<< std::setw(10) << data << "|";
}
void	PhoneBook::PrintData()
{
	int i;

	i = 0;
	std::cout<< "---------------------------------------------"<<std::endl;
	std::cout<< "|     index|First Name| Last Name| Nick Name|"<<std::endl;
	std::cout<< "---------------------------------------------"<<std::endl;
	while (i < 8 && i <= IndexContact)
	{
		std::cout<<"|         " << i + 1 << "|";
		PrintLin(Contacs[i].GetFirstName());
		PrintLin(Contacs[i].GetLastName());
		PrintLin(Contacs[i].GetNicName());
		std::cout<< std::endl;
		i++;
	}
}	

void	PhoneBook::SerchContact()
{
	std::string	input;
	int i;
	
	if (IndexContact < 0)
		std::cout << "❌ <--- empty list ---> ❌" << std::endl;
	else
	{
		while (1)
		{
			std::cout << "Enter Index :";
			if (!std::getline(std::cin, input))
				return ;
			i = std::atoi(input.data());
			// std::cout<< "this is i:" << i - 1 << "and this is inde : " << IndexContact << std::endl;
			if (i - 1 > IndexContact || i - 1 < 0) //my arr start from 0 and the index printed start from 1		
				std::cout<< "❌**** Wrong Index *****❌" << std::endl;
			else 
				break;	
		}
		std::cout<< "🔘 First Name : " << Contacs[i - 1].GetFirstName()<<std::endl;
		std::cout<< "🔘 Last Name : " << Contacs[i - 1].GetLastName()<<std::endl;
		std::cout<< "🔘 Nic Name : " << Contacs[i - 1].GetNicName()<<std::endl;
		std::cout<< "🔘 Phone Number : " << Contacs[i - 1].GetPhoneNumber() <<std::endl;
	}

}