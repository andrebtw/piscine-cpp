/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:00:20 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/15 12:15:28 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    return ;
}

Weapon::~Weapon()
{
    return ;
}

std::string const	&Weapon::getType() const
{
	return this->type;
}

void	Weapon::setType(std::string weapon_type)
{
	this->type = weapon_type;
}
