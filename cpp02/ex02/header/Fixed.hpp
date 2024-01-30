/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:02:19 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/30 16:27:11 by anrodri2         ###   ########.fr       */
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
		Fixed(Fixed const &src);
		Fixed &operator=(const Fixed &src);
		~Fixed();

		Fixed	operator*(Fixed const &src) const;
		Fixed	operator+(Fixed const &src) const;
		Fixed	operator-(Fixed const &src) const;
		Fixed	operator/(Fixed const &src) const;

		bool	operator<(Fixed const &src) const;
		bool	operator<=(Fixed const &src) const;
		bool	operator>(Fixed const &src) const;
		bool	operator>=(Fixed const &src) const;
		bool	operator==(Fixed const &src) const;
		bool	operator!=(Fixed const &src) const;

		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		static const Fixed &min(Fixed const &nb1, Fixed const &nb2);
		static Fixed &min(Fixed &nb1, Fixed &nb2);
		static const Fixed &max(Fixed const &nb1, Fixed const &nb2);
		static Fixed &max(Fixed &nb1, Fixed &nb2);
		

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
