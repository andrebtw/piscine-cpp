/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:23:21 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/30 19:40:48 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap test("hello_world");
	ScavTrap test2(test);

	test2.guardGate();
	test2.attack("ennemy");
	return (EXIT_SUCCESS);
}
