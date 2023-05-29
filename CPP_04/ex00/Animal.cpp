/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:02:58 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 23:59:51 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Default")
{
    std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(std::string _type):type(_type)
{
    std::cout << "Animal " << this->type<< " Default Constructor Called" << std::endl;
}

Animal::Animal(Animal const &str)
{
    std::cout << "Animal Copy Constructor Called" << std::endl;
    *this = str;
}

Animal  &Animal::operator=(Animal const &raw)
{
    std::cout << "Animal Copy Assignment Operator Constructor" << std::endl;
    if (this != &raw)
        this->type = raw.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor Called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

void    Animal::setType(std::string _type)
{
    this->type = _type;
}

void    Animal::makeSound() const
{
    std::cout << "Animal Sound Called!." << std::endl;    
}