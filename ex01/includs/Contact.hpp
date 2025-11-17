/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:10:58 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/15 08:46:20 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_hpp
#define CONTACT_hpp
#include <string>
#include <iostream>
#include <cstdlib>

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
		std::string	GetFirstName() const;
		std::string	GetLastName() const;
		std::string	GetNicName() const;
		std::string	GetPhoneNumber() const;
		std::string	GetDarkestSecret() const;
};
#endif
