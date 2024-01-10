/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 15:01:42 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/10 16:07:48 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define HORDE_SIZE 5
#define HORDE_NAME "ZOMBIE!"

int	main(void)
{
	Zombie	*zombie_horde = zombieHorde(HORDE_SIZE, HORDE_NAME);

	for (int i = 0; i < HORDE_SIZE; i++)
	{
		if (i % 2 == 0)
			zombie_horde[i].setName("ZOMBIE MODIFIED!");
		zombie_horde[i].announce();
	}
	delete [] zombie_horde;
	return (EXIT_SUCCESS);
}
