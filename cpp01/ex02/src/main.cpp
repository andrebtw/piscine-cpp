/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:11:30 by anrodri2          #+#    #+#             */
/*   Updated: 2024/02/02 18:43:50 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Memory address of string: " << &string << std::endl;
	std::cout << "Memory address of string pointer: " << stringPTR << std::endl;
	std::cout << "Memory address of string ref: " << &stringREF << std::endl << std::endl;

	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value of string pointer: " << *stringPTR << std::endl;
	std::cout << "Value of string ref: " << stringREF << std::endl;
}
