/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:34:58 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/23 21:47:17 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string _name )
{
    this->name = _name;
}

Zombie::~Zombie()
{
    std::cout << this->name <<  ": Destroyed Successfuly"<< std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

void    Zombie::setName( std::string _name )
{
    this->name = _name;
}
