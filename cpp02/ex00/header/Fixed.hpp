/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 < anrodri2@student.42lyon.fr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:48:24 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/29 16:56:16 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed &arg);
		Fixed &operator = (const Fixed &arg);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_value;
		static const int	_bits = 8;

};

#endif
