/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:00:27 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/03 14:18:48 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie = newZombie("zombie_1_alloced");
	Zombie	*zombie1 = newZombie("zombie_2_alloced");


	zombie->announce();
	zombie1->announce();
	randomChump("zombie 1 non alloced");
	randomChump("zombie 2 non alloced");
	delete zombie;
	delete zombie1;
	return (EXIT_SUCCESS);
}
