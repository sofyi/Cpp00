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

#include "PhoneBook.hpp"

void PhoneBook::add_contact(Contact nod)
{
	static int i;

	if (i == 8)
		i = 0;
	tab_contac[i++] = nod;
}
void PhoneBook::print_contact(void)
{
	int	i;
	PhoneBook cc;
	i = 0;
	while (i < 1)
	{
		std::cout<< cc.tab_contac[i] <<std::endl;
		i++;
	}
}