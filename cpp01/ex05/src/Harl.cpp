/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:45:28 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/20 14:18:39 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	size_t		index = 0;
	std::string	levels_array[LEVEL_COUNT] = {"debug", "info", "warning", "error"};
	void		(Harl::*function_ptr[LEVEL_COUNT])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	if (!level[0])
	{
		std::cout << KYELLOW << "Empty input." << KNORMAL << std::endl;
		return ;
	}
	while (level[index])
	{
		if (level == levels_array[index])
			{
				(this->*function_ptr[index])();
				return ;
			}
		index++;
	}
	std::cout << KYELLOW << "This level does not exist." << KNORMAL << std::endl;
	return ;
}
