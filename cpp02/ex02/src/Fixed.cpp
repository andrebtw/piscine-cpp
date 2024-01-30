/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:02:37 by anrodri2          #+#    #+#             */
/*   Updated: 2024/01/30 16:28:11 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called." << std::endl;
	return ;
}

Fixed::Fixed(int const number)
{
	this->_value = number << this->_bits;
	return ;
}

Fixed::Fixed(float const number)
{
	this->_value = (int)roundf(number * (1 << this->_bits));
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Constructor by copy called." << std::endl;
	*this = src;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &src)
{
	std::cout << "Copy assignment operator called." << std::endl;
	this->_value = src.getRawBits();
	return (*this);
}

Fixed	Fixed::operator*(Fixed const &src) const
{
	Fixed	tmp;

	tmp.setRawBits(this->_value * src._value >> this->_bits);
	return (tmp);
}

Fixed	Fixed::operator+(Fixed const &src) const
{
	Fixed	tmp;

	tmp.setRawBits(this->_value + src._value);
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const &src) const
{
	Fixed	tmp;

	tmp.setRawBits(this->_value - src._value);
	return (tmp);
}

Fixed	Fixed::operator/(Fixed const &src) const
{
	Fixed	tmp;

	tmp.setRawBits((this->_value << this->_bits) / src._value);
	return (tmp);
}

bool	Fixed::operator<(Fixed const &src) const
{
	return (this->_value < src._value);
}

bool	Fixed::operator<=(Fixed const &src) const
{
	return (this->_value <= src._value);
}

bool	Fixed::operator>(Fixed const &src) const
{
	return (this->_value > src._value);
}

bool	Fixed::operator>=(Fixed const &src) const
{
	return (this->_value >= src._value);
}

bool	Fixed::operator==(Fixed const &src) const
{
	return (this->_value == src._value);
}

bool	Fixed::operator!=(Fixed const &src) const
{
	return (this->_value != src._value);
}

Fixed &Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp = *this;

	this->_value++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp = *this;

	this->_value--;
	return (tmp);
}

const Fixed	&Fixed::min(Fixed const &nb1, Fixed const &nb2)
{
	if (nb1._value < nb2._value)
		return (nb1);
	return (nb2);
}

Fixed	&Fixed::min(Fixed &nb1, Fixed &nb2)
{
	if (nb1 < nb2)
		return (nb1);
	return (nb2);
}

const Fixed	&Fixed::max(Fixed const &nb1, Fixed const &nb2)
{
	if (nb1._value > nb2._value)
		return (nb1);
	return (nb2);
}

Fixed	&Fixed::max(Fixed &nb1, Fixed &nb2)
{
	if (nb1 > nb2)
		return (nb1);
	return (nb2);
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
float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_bits);
}

std::ostream &operator<<(std::ostream &os, Fixed const &number)
{
	os << number.toFloat();
	return (os);
}
