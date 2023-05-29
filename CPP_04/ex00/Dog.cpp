/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:22:07 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/28 21:23:38 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog Default Constructor Called"<< std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor Called" << std::endl;
}

Dog::Dog(Dog const &str):Animal(str)
{
    std::cout << "Dog Copy Constructor Called" << std::endl;
}

Dog &Dog::operator=(Dog const &raw)
{
    std::cout << "Dog Copy Assignment Operator Constructor" << std::endl;
    if (this != &raw)
        this->type = raw.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog sound: Woof..  Woof..!" << std::endl;
}
