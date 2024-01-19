/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:00:20 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/19 18:58:15 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

std::string const	&Weapon::getType(void) const
{
	return this->_type;
}

void	Weapon::setType(std::string weapon_type)
{
	this->_type = weapon_type;
}
