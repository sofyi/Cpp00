/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:10:58 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/08 17:24:13 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_hpp
#define CONTACT_hpp
#include <string>
#include <iostream>

class Contact
{
	private:
	std::string f_name;
	std::string l_name;
	std::string n_name;
	std::string phon_num;
	public:
	void set_privet_val(std::string str, char t);
	std::string get_valu_privet(char typ);
};
#endif
