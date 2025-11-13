/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:24:24 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/10 11:07:53 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includs/Contact.hpp"

void	Contact::SetFirstName(std::string firstname) 
{
	FirstName = firstname;
}
void	Contact::SetLastName(std::string lastname) 
{
	LastName = lastname;
}
void	Contact::SetNicName(std::string nicname) 
{
	NickName = nicname;
}
void	Contact::SetPoneNumber(std::string phonenumber) 
{
	PhoneNumber = phonenumber;
}
void	Contact::SetDarkestSecret(std::string darkestsecret) 
{
	DarkestSecret = darkestsecret;
}
std::string	Contact::GetFirstName() 
{
	return FirstName;
}
std::string	Contact::GetLastName() 
{
	return LastName;
}
std::string	Contact::GetNicName() 
{
	return NickName;
}
std::string	Contact::GetPhoneNumber() 
{
	return PhoneNumber;
}
std::string	Contact::GetDarkestSecret() 
{
	return DarkestSecret;
}

