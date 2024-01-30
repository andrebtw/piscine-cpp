/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:47:23 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/30 19:47:28 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "ScavTrap";
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "Default ScavTrap constructor called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "Constructor ScavTrap by name called." << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap called." << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "Constructor ScavTrap by copy called." << std::endl;
	*this = src;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "Copy ScavTrap assignment operator called." << std::endl;
	this->_name = src._name;
	this->_health = src._health;
	this->_energy = src._energy;
	this->_attack = src._attack;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_health <= 0)
	{
		std::cout << this->_name << " is dead. (ScavTrap)" << std::endl;
		return ;
	}
	if (this->_energy <= 0)
	{
		std::cout << this->_name << " does not have any energy left. (ScavTrap)" << std::endl;
		return ;
	}
	std::cout << target << " has been attacked by " << this->_name << " and lost " << this->_attack << " damage. (ScavTrap)" << std::endl;
	this->_energy--;
}

void	ScavTrap::guardGate(void)
{
	if (this->_health <= 0)
	{
		std::cout << "ScavTrap is dead." << std::endl;
		return ;
	}
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
