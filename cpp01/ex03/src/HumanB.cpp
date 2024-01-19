/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:09:15 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/19 18:58:08 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::HumanB(std::string name, Weapon &weapon) : _name(name), _weapon(&weapon)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;	
}

void	HumanB::attack(void)
{
	if (this->_weapon)
	{
		std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
		return ;
	}
	std::cout << this->_name << " does not have any weapon." << std::endl;
	return ; 
}
