/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:49:54 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/30 19:52:53 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_name = "FragTrap";
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "Default FragTrap constructor called." << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "Constructor FragTrap by name called." << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap called." << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "Constructor FragTrap by copy called." << std::endl;
	*this = src;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	std::cout << "Copy FragTrap assignment operator called." << std::endl;
	this->_name = src._name;
	this->_health = src._health;
	this->_energy = src._energy;
	this->_attack = src._attack;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_health <= 0)
	{
		std::cout << this->_name << " is dead." << std::endl;
		return ;
	}
	std::cout << "High five!!!" << std::endl;
}
