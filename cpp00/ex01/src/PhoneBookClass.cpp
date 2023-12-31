/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 < anrodri2@student.42lyon.fr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:30:14 by anrodri2          #+#    #+#             */
/*   Updated: 2023/12/22 15:43:42 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

/* 
-----------------------------------
-----------------------------------
---- CONSTRUCTOR / DESTRUCTOR ----- 
-----------------------------------
-----------------------------------*/

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	this->is_max_index = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int	isDigit(std::string string)
{
	if (string[0] <= 57 && string[0] > 48 && string.size() == 1)
		return (1);
	return (0);
}

int	get_info(std::string title, std::string *str, std::string err_msg)
{
	std::cout << CLEAR_SCREEN;
	std::cout << title << std::endl << std::endl;
	std::cout << ">>> ";
	std::getline(std::cin, *str);
	if (!std::cin)
	{
		std::cout << std::endl << KGREEN << std::endl << "Closing... " << KNORMAL << std::endl << std::endl;
		return (1);
	}
	while (str->empty())
	{
		std::cout << std::endl << KRED << err_msg << KNORMAL;
		std::cin.ignore();
		std::cout << CLEAR_SCREEN;
		std::cout << title << std::endl << std::endl;
		std::cout << ">>> ";
		std::getline(std::cin, *str);
		if (!std::cin)
		{
			std::cout << std::endl << KGREEN << std::endl << "Closing... " << KNORMAL << std::endl << std::endl;
			return (1);
		}
	}
	return (0);
}

void	print_info_search(std::string string)
{
	std::string	new_str;

	new_str = string;
	if (new_str.size() > 10)
	{
		new_str.resize(9);
		new_str = new_str + ".";
	}
	std::cout << new_str;
}

int	PhoneBook::createContact(void)
{
	std::string	input;
	int			contact_nb;

	if (this->index == 8)
	{
		this->index = 0;
		contact_nb = 0;
		this->is_max_index = 1;
	}
	else
	{
		contact_nb = this->index;
	}
	this->index++;

	if (get_info("---FIRST NAME---", &input, "Please enter something. "))
		return (1);
	this->contact[contact_nb].setFirstName(input);

	if (get_info("---LAST NAME---", &input, "Please enter something. "))
		return (1);
	this->contact[contact_nb].setLastName(input);
	
	if (get_info("---NICKNAME---", &input, "Please enter something. "))
		return (1);
	this->contact[contact_nb].setNickname(input);

	if (get_info("---PHONE NUMBER---", &input, "Please enter something. "))
		return (1);
	this->contact[contact_nb].setPhoneNumber(input);

	if (get_info("---DARKEST SECRET---", &input, "Please enter something. "))
		return (1);
	this->contact[contact_nb].setDarkestSecret(input);
	return (0);
}

int	PhoneBook::printAllContacts(void)
{
	size_t		i;
	std::string	input;
	size_t		loop_limit;

	std::cout << CLEAR_SCREEN;
	std::cout << "---SAVED CONTACTS---" << std::endl << std::endl;
	if (this->index == 0)
	{
		std::cout << std::endl << KRED << "No contacts were found. " << KNORMAL;
		std::cin.ignore();
		return (0);
	}
	i = 0;
	if (!is_max_index)
		loop_limit = this->index;
	else
		loop_limit = 8;
	while (i < loop_limit)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << i + 1;
		std::cout << "|";
		std::cout << std::setw(10);
		print_info_search(this->contact[i].getFirstName());
		std::cout << "|";
		std::cout << std::setw(10);
		print_info_search(this->contact[i].getLastName());
		std::cout << "|";
		std::cout << std::setw(10);
		print_info_search(this->contact[i].getNickname());
		std::cout << "|";
		i++;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	// function to print list
	std::cout << ">>> ";
	std::getline(std::cin, input);
	if (!std::cin)
	{
		std::cout << std::endl << KGREEN << std::endl << "Closing... " << KNORMAL << std::endl << std::endl;
		return (1);
	}
	if (!isDigit(input))
	{
		std::cout << std::endl << KRED << "Please enter a number. " << KNORMAL;
		std::cin.ignore();
		return (0);
	}
	if (input[0] - 48 > (int)loop_limit)
	{
		std::cout << std::endl << KRED << "Please enter an index in the rigth range. " << KNORMAL;
		std::cin.ignore();
		return (0);
	}

	this->contact[input[0] - 48 - 1].displayIndexInfo();
	std::cout << std::endl << KGREEN << "Please press enter to continue. " << KNORMAL;
	std::cin.ignore();
	return (0);
}
