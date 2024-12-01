/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 03:15:01 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/30 14:33:50 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed()
{
	_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	this->operator=(fixed);
}

Fixed::Fixed(const int value)
{
	_fixedPointValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
	_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	_fixedPointValue = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}

int Fixed::toInt(void) const
{
	return (_fixedPointValue >> _fractionalBits);
}

float Fixed::toFloat(void) const
{
	return ((float)_fixedPointValue / (1 << _fractionalBits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	_fixedPointValue++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	_fixedPointValue++;
	return (temp);
}

Fixed &Fixed::operator--(void)
{
	_fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	_fixedPointValue--;
	return (temp);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}