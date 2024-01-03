/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:03:02 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/03 13:31:39 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	return ;
}

Zombie::~Zombie()
{
	std::cout << KYELLOW << "Zombie " << this->name << " destroyed." << KNORMAL << std::endl;
	return ;
}

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
