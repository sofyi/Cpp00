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


int main()
{
	std::string input;
	PhoneBook tst;
	Contact t;
	// while (1)
	// {
		std::cout<< "ENTER : ADD, SEARCH, EXIT"<<std::endl;
		std::getline(std::cin, input);
		// if (input.compare("EXIT"))
		// 	break;
		// if (input.compare("ADD"))
		// 	ft_add_contact();
		t.set_privet_val(input, 'f');
		tst.add_contact(t);
		tst.print_contact();
		std::cout << input << std::endl;
	//}
}