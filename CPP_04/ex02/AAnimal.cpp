/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:01:41 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 03:14:05 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal():type("Default")
{
    std::cout << "AAnimal   :Default Constructor Called" << std::endl;
}

AAnimal::AAnimal(std::string _type):type(_type)
{
    std::cout << "AAnimal   :Default Constructor Called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &str)
{
    std::cout << "AAnimal   :Copy Constructor Called" << std::endl;
    *this = str;
}

AAnimal  &AAnimal::operator=(AAnimal const &raw)
{
    std::cout << "AAnimal   :Copy Assignment ..Operator Constructor" << std::endl;
    if (this != &raw)
        this->type = raw.type;
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal   :Destructor Called" << std::endl;
}

std::string AAnimal::getType() const
{
    return (this->type);
}

void    AAnimal::setType(std::string _type)
{
    this->type = _type;
}

void    AAnimal::makeSound() const
{
    std::cout << "AAnimal Sound Called!." << std::endl;    
}
