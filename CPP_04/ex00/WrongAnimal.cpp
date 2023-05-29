/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:27:01 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/28 21:42:20 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimaml")
{
    std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type):type(_type)
{
    std::cout << "WrongAnimal" << this->type<< " Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &str)
{
    std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
    *this = str;
}

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &raw)
{
    std::cout << "WrongAnimal Copy Assignment Operator Constructor" << std::endl;
    if (this != &raw)
        this->type = raw.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void    WrongAnimal::setType(std::string _type)
{
    this->type = _type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal Sound Called!." << std::endl;    
}