/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 05:49:39 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/30 19:07:48 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0)
{
}

Point::~Point()
{
}

Point::Point(const Point &point):x(point.x),y(point.y)
{
}

Point::Point(const float x, const float y):x(x),y(y)
{
}

Point & Point::operator=(const Point &raw)
{
    if (this != &raw)
    {
       (Fixed)this->x = raw.get_X_P();
       (Fixed)this->y = raw.get_Y_P();
    }
    return (*this);
}

Fixed Point::get_X_P() const
{
    return (this->x);
}

Fixed Point::get_Y_P() const
{
    return (this->y);
}
