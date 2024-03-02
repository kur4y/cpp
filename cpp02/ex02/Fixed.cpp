/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:58:17 by tanota            #+#    #+#             */
/*   Updated: 2024/03/02 15:00:35 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
	return ;
}

Fixed::~Fixed()
{
	return ;
}

Fixed::Fixed(const Fixed& other) : _fixedPointValue(other._fixedPointValue)
{
    *this = other;
}

Fixed::Fixed(const int intValue) : _fixedPointValue(intValue << _fractionalBits)
{
	return ;
}

Fixed::Fixed(const float floatValue) : _fixedPointValue(roundf(floatValue * (1 << _fractionalBits)))
{
	return ;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		_fixedPointValue = other._fixedPointValue;
	return (*this);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_fixedPointValue) / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
	return (_fixedPointValue >> _fractionalBits);
}

int Fixed::getRawBits(void) const
{
	return (_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
}

bool Fixed::operator>(const Fixed& other) const
{
	return (_fixedPointValue > other._fixedPointValue);
}

bool Fixed::operator<(const Fixed& other) const
{
	return (_fixedPointValue < other._fixedPointValue);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (_fixedPointValue >= other._fixedPointValue);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (_fixedPointValue <= other._fixedPointValue);
}

bool Fixed::operator==(const Fixed& other) const
{
	return (_fixedPointValue == other._fixedPointValue);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (_fixedPointValue != other._fixedPointValue);
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return (Fixed(toFloat() / other.toFloat()));
}

Fixed& Fixed::operator++()
{
	++_fixedPointValue;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_fixedPointValue++;
	return (tmp);
}

Fixed& Fixed::operator--()
{
	--_fixedPointValue;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_fixedPointValue--;
	return (tmp);
}

Fixed& Fixed::min(Fixed& a, Fixed&b)
{
	return ((a < b) ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return ((a < b) ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return ((a > b) ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return ((a > b) ? a : b);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixedPointNumber)
{
    out << fixedPointNumber.toFloat();
    return (out);
}
