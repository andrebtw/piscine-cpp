/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 17:00:02 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/19 18:57:44 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);

		void				setType(std::string weapon_type);
		std::string const	&getType(void) const;
	private:
		std::string	_type;
};

#endif