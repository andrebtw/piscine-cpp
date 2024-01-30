/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:47:20 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/30 19:32:26 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("ClapTrap"), _health(10), _energy(10), _attack(0)
{
	std::cout << "Default constructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _attack(0)
{
	std::cout << "Constructor by name called." << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Constructor by copy called." << std::endl;
	*this = src;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->_name = src._name;
	this->_health = src._health;
	this->_energy = src._energy;
	this->_attack = src._attack;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_health <= 0)
	{
		std::cout << this->_name << " is dead." << std::endl;
		return ;
	}
	if (this->_energy <= 0)
	{
		std::cout << this->_name << " does not have any energy left." << std::endl;
		return ;
	}
	std::cout << target << " has been attacked by " << this->_name << " and lost " << this->_attack << " damage." << std::endl;
	this->_energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health <= 0)
	{
		std::cout << this->_name << "is dead." << std::endl;
		return ;
	}
	std::cout << this->_name << " lost " << amount << " health points." << std::endl;
	this->_health = this->_health - amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health <= 0)
	{
		std::cout << this->_name << " is dead." << std::endl;
		return ;
	}
	if (this->_energy <= 0)
	{
		std::cout << this->_name << " does not have any energy left." << std::endl;
		return ;
	}
	std::cout << this->_name << " gained " << amount << " health points by repairation." << std::endl;
	this->_health = this->_health + amount;
	this->_energy--;
}
