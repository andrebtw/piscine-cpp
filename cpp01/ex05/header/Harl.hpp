/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 < anrodri2@student.42lyon.fr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 13:42:14 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/29 16:55:30 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

#define KNORMAL "\x1B[0m"
#define KRED "\x1B[31m"
#define KGREEN "\x1B[32m"
#define KYELLOW "\x1B[33m"
#define KBLUE "\x1B[34m"
#define KWHITE "\x1B[37m"

#define LEVEL_COUNT 4

class Harl
{
	public:
		Harl(void);
		~Harl(void);

		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif