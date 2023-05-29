/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:45:02 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 23:47:17 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int _fix;
        static const int _fix_bit = 8; 
    public:
        Fixed();
        Fixed(const int num);
        Fixed(const float n);
        Fixed(const Fixed& fixed);
        Fixed& operator=(const Fixed& fixed);
        ~Fixed();

        bool		operator < ( Fixed const & fix );
		bool		operator > ( Fixed const & fix );
		bool		operator <= ( Fixed const & fix );
		bool		operator >= ( Fixed const & fix );
		bool		operator == ( Fixed const & fix );
		bool		operator != ( Fixed const & fix );

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

        Fixed operator + (const Fixed & fix) const;
		Fixed operator - (const Fixed & fix) const;
		Fixed operator * (const Fixed & fix) const;
		Fixed operator / (const Fixed & fix) const;
		Fixed operator ++ ();
		Fixed operator ++ (int);
		Fixed operator -- ();
		Fixed operator -- (int);

        static Fixed max(Fixed &a, Fixed &b);
        static const Fixed max(const Fixed &a, const Fixed &b);
        static Fixed min(Fixed &a, Fixed &b);
        static const Fixed min(const Fixed &a, const Fixed &b);

};

std::ostream& operator<<(std::ostream &output, Fixed const &input);

#endif