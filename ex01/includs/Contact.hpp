/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:10:58 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/10 10:57:56 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_hpp
#define CONTACT_hpp
#include <string>
#include <iostream>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		void	SetFirstName(std::string firstname);
		void	SetLastName(std::string lastname);
		void	SetNicName(std::string nicname);
		void	SetPoneNumber(std::string phonenumber);
		void	SetDarkestSecret(std::string darkestsecret);
		std::string	GetFirstName();
		std::string	GetLastName();
		std::string	GetNicName();
		std::string	GetPhoneNumber();
		std::string	GetDarkestSecret();
};
#endif
