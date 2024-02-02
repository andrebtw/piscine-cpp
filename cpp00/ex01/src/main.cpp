/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:30:12 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/26 20:35:17 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

#include "ContactClassHeader.hpp"
#include "PhoneBookClassHeader.hpp"

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#define CLEAR_SCREEN "\033[2J\033[1;1H"
#define KNORMAL "\x1B[0m"
#define KRED "\x1B[31m"
#define KGREEN "\x1B[32m"
#define KYELLOW "\x1B[33m"
#define KBLUE "\x1B[34m"
#define KWHITE "\x1B[37m"

int	get_input(std::string *str)
{
	std::cout << CLEAR_SCREEN;
	std::cout << "---PHONE BOOK---" << std::endl << std::endl;
	std::cout << ">>> ";
	std::getline(std::cin, *str);
	if (!std::cin)
	{
		std::cout << std::endl << KGREEN << std::endl << "Closing... " << KNORMAL << std::endl << std::endl;
		return (1);
	}
	return (0);
}

int	main(void)
{
    PhoneBook	phoneBook;
    std::string	command;

    if (get_input(&command))
		return (EXIT_SUCCESS);
    while (command != "EXIT" || std::cin.eof())
    {
        if (command == "ADD")
        {
        	if (phoneBook.createContact())
				return (EXIT_SUCCESS);
        }
		else if (command == "SEARCH")
		{
			if (phoneBook.printAllContacts())
				return (EXIT_SUCCESS);
		}
		else
		{
			std::cout << std::endl << KRED << "Please enter a valid option. " << KNORMAL;
			std::cin.ignore();
		}
        if (get_input(&command))
			return (EXIT_SUCCESS);
    }
	std::cout << std::endl << KGREEN << "Closing... " << KNORMAL << std::endl << std::endl;
    return (EXIT_SUCCESS);
}
