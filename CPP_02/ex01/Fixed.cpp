/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:13:02 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/25 21:37:14 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fix = 0;
}

Fixed::Fixed(const Fixed& fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed&  Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fix = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits() const
{
    return (this->_fix);
}

void    Fixed::setRawBits( int const raw )
{
    this->_fix = raw;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fix = num * (1 << this->_fix_bit);
}

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fix = (int)(roundf(n * (1 << this->_fix_bit)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const {
	return ((double)this->_fix / (double)(1 << this->_fix_bit));
}

int Fixed::toInt( void ) const {
	return (this->_fix / (1 << this->_fix_bit));
}

std::ostream& operator<<(std::ostream &output, Fixed const &input)
{
    output << input.toFloat();
	return output;
}