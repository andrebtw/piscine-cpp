/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 < anrodri2@student.42lyon.fr >    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:28:01 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/29 16:24:49 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called." << std::endl;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
	return ;
}

Fixed::Fixed(Fixed &arg)
{
	std::cout << "Constructor by copy called." << std::endl;
	*this = arg;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits function called." << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits function called." << std::endl;
	this->_value = raw;
	return ;
}