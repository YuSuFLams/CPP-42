/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:19:18 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/23 23:32:52 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(const std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
}

const   std::string& Weapon::getType( void )
{
    return (this->type);
}

void    Weapon::setType(std::string new_tupe)
{
    this->type = new_tupe;
}