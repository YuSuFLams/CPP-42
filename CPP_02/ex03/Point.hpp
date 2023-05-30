/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 05:36:02 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/30 06:02:20 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        ~Point();
        Point(const float x, const float y);
        Point(Point const &point);

        Point & operator=(const Point &raw);

        Fixed get_X_P() const;
        Fixed get_Y_P() const;
};

bool    bsq(Point const a, Point const b, Point const c, Point const point);

#endif