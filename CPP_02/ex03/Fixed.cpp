/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:27:49 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/30 18:08:20 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->_fix = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
    *this = fixed;
}

Fixed::~Fixed()
{
}

int   Fixed::getRawBits() const
{
    return (this->_fix);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fix = raw;
}

Fixed&  Fixed::operator=(const Fixed& fixed)
{
    this->_fix = fixed.getRawBits();
    return (*this);
}

Fixed Fixed::operator+(const Fixed & fix) const
{
    return Fixed(this->toFloat() + fix.toFloat());
}

Fixed Fixed::operator-(const Fixed & fix) const
{
    return Fixed(this->toFloat() - fix.toFloat());
}

Fixed Fixed::operator*(const Fixed & fix) const
{
    return Fixed(this->toFloat() * fix.toFloat());
}

Fixed Fixed::operator/(const Fixed & fix) const
{
    return Fixed(this->toFloat() / fix.toFloat());
}

Fixed   Fixed::operator++( int )
{
	Fixed	_fixed = (*this);

	++(*this);
	return (_fixed);
}

Fixed   Fixed::operator--( int )
{
	Fixed	_fixed = (*this);

	--(*this);
	return (_fixed);
}

Fixed   Fixed::operator++()
{
    _fix++;
    return(*this);
}

Fixed   Fixed::operator--()
{
    _fix--;
    return(*this);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
    if (a < b)
        return (b);
    return (a);
}

Fixed const Fixed::max(const Fixed &a, const Fixed &b)
{
    if ((Fixed)a < (Fixed)b)
        return (b);
    return (a);
}

Fixed const Fixed::min(const Fixed &a, const Fixed &b)
{
    if ((Fixed)a < (Fixed)b)
        return (a);
    return (b);
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

std::ostream& operator<<(std::ostream &output, Fixed const &input)
{
    output << input.toFloat();
	return output;
}

float Fixed::toFloat( void ) const {
	return ((float)this->_fix / (float)(1 << this->_fix_bit));
}

int Fixed::toInt( void ) const {
	return (this->_fix / (1 << this->_fix_bit));
}

bool		Fixed::operator < ( Fixed const & fix )
{
    return _fix < fix._fix;
}

bool		Fixed::operator > ( Fixed const & fix )
{
    return _fix > fix._fix;
}

bool		Fixed::operator <= ( Fixed const & fix )
{
    return _fix <= fix._fix;
}

bool		Fixed::operator >= ( Fixed const & fix )
{
    return _fix >= fix._fix;
}

bool		Fixed::operator == ( Fixed const & fix )
{
    return _fix == fix._fix;
}

bool		Fixed::operator != ( Fixed const & fix )
{
    return _fix != fix._fix;
    
}

Fixed::Fixed(const int nb){
	this->_fix = nb * (1 << this->_fix_bit);
} 

Fixed::Fixed(const float nb){
	this->_fix = (int)(roundf(nb * (1 << this->_fix_bit)));
}
