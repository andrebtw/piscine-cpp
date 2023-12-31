/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:30:16 by anrodri2          #+#    #+#             */
/*   Updated: 2023/12/21 18:22:13 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

/* 
-----------------------------------
-----------------------------------
---- CONSTRUCTOR / DESTRUCTOR ----- 
-----------------------------------
-----------------------------------*/

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

/* 
-----------------------------------
-----------------------------------
------------ GET NAMES ------------ 
-----------------------------------
-----------------------------------*/

std::string	Contact::getFirstName(void) const
{
	return (this->first_name);
}

std::string	Contact::getLastName(void) const
{
	return (this->last_name);
}

std::string	Contact::getNickname(void) const
{
	return (this->nickname);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->phone_number);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->darkest_secret);
}

/* 
-----------------------------------
-----------------------------------
------------ SET NAMES ------------ 
-----------------------------------
-----------------------------------*/

void	Contact::setFirstName(std::string input)
{
	this->first_name = input;
	return ;
}

void	Contact::setLastName(std::string input)
{
	this->last_name = input;
	return ;
}

void	Contact::setNickname(std::string input)
{
	this->nickname = input;
	return ;
}

void	Contact::setPhoneNumber(std::string input)
{
	this->phone_number = input;
	return ;
}

void	Contact::setDarkestSecret(std::string input)
{
	this->darkest_secret = input;
	return ;
}

void	Contact::displayIndexInfo(void) const
{

	std::cout << std::endl;
	std::cout << "First name : " << Contact::getFirstName() << std::endl;
	std::cout << "Last name : " << Contact::getLastName() << std::endl;
	std::cout << "Nickname : " << Contact::getNickname() << std::endl;
	std::cout << "Phone number : " << Contact::getPhoneNumber() << std::endl;
	std::cout << "Darkeset secret : " << Contact::getDarkestSecret() << std::endl;
	return ;
}
