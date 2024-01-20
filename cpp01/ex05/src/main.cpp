/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 01:04:04 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/20 14:16:30 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl1;

	harl1.complain("debug");
	harl1.complain("info");
	harl1.complain("warning");
	harl1.complain("error");
	harl1.complain("wew");
	harl1.complain("");
	return (EXIT_SUCCESS);
}
