/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 < anrodri2@student.42lyon.fr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:56:35 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/30 12:59:06 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

class Fixed
{
	public:
		Fixed();
		Fixed(int const number);
		Fixed(float const number);
		Fixed(Fixed const &arg);
		Fixed &operator = (const Fixed &arg);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					_value;
		static const int	_bits = 8;

};

std::ostream	&operator<<(std::ostream &os, Fixed const &number);

#endif
