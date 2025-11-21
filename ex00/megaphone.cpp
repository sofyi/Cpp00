/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:16:24 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/21 13:39:29 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	to_uper(std::string str)
{
	std::string::iterator c;

	c = str.begin();
	while (c != str.end())
	{
		c.operator*() = std::toupper(*c);
		c++;
	}
	std::cout << str;
}

int main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	while (i < ac)
		to_uper(av[i++]);
	std::cout<< std::endl;
}