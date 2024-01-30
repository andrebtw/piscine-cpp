/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:39:55 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/30 17:36:31 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap test("hello_world");

	test.attack("attacked_guy");
	test.beRepaired(5000);
	test.takeDamage(4000);
	test.attack("dwdw");
	test.takeDamage(5200);
	test.attack("dwiojdiowdwj");
	return (EXIT_SUCCESS);
}