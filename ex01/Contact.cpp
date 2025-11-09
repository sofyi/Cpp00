/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:24:24 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/08 17:24:31 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

void Contact::set_privet_val(std::string str, char t)
{
	if (t == 'f')
		f_name = str;
	else if (t == 'l')
		l_name = str;
	else if (t == 'n')
		n_name = str;
	else if (t == 'p')
		phon_num = str;
}
std::string Contact::get_valu_privet(char type)
{
	if (type == 'f')
		return (f_name);
	else if (type == 'l')
		return (l_name);
	else if (type == 'n')
		return (n_name);
	else if (type == 'p')
		return (phon_num);
	return (NULL);
}
int main()
{
	Contact c;
	char s[] = "coco";
	c.set_privet_val(s, 'f');
	std::cout<< c.get_valu_privet('f');
}

