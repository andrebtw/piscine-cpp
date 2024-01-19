/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:08:49 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/19 18:59:51 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		~HumanB(void);

		void	attack(void);
        void	setWeapon(Weapon &weapon);
	private:
		std::string _name;
		Weapon		*_weapon;
};

#endif