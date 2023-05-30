/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 06:00:12 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/30 19:13:26 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float   area_triangle(Point const x, Point const y, Point const z)
{
    float area_triange;

    area_triange = (((y.get_X_P() - x.get_X_P()) * (z.get_Y_P() - x.get_Y_P()) - \
    (z.get_X_P() - x.get_X_P()) * (y.get_Y_P() - x.get_Y_P())) / 2).toFloat();
    
    return ((area_triange < 0)? -area_triange: area_triange);
}

bool    bsp(Point const a, Point const b, Point const c, Point const point)
{
    float area = area_triangle(a, b, c);
    float p1 = area_triangle(point ,a, b);
    float p3 = area_triangle(point ,b, c);
    float p2 = area_triangle(point ,c, a);

    if (area == p1 + p2 + p3)
        return (true);
    return (false);
}
