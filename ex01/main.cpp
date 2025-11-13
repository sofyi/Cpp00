/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:44:54 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/12 11:30:12 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includs/PhoneBook.hpp"

int main()
{
	std::string input;
	PhoneBook phonebook;

	while(true)
	{
		std::cout<< "Enter --> : ADD, SERCH, EXIT"<< std::endl;
		std::cout<<"--> ";
		if (!std::getline(std::cin, input) || !input.compare("EXIT"))
			break;
		if (!input.compare("ADD"))
			phonebook.AddContact();
		// else if (input.compare("SERCH"))
		// 	phonebook.SerchContact();
	}
}
