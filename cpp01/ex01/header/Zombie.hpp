/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:05:48 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/10 15:54:24 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#define CLEAR_SCREEN "\033[2J\033[1;1H"

#define KNORMAL "\x1B[0m"
#define KRED "\x1B[31m"
#define KGREEN "\x1B[32m"
#define KYELLOW "\x1B[33m"
#define KBLUE "\x1B[34m"
#define KWHITE "\x1B[37m"

class	Zombie
{
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	announce(void);
		void	setName(std::string name);

	private:
		std::string	name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif