/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 19:53:17 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/30 19:54:36 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap test("test");

	test.attack("ennemy");
	test.beRepaired(50);
	test.highFivesGuys();
	return (EXIT_SUCCESS);
}