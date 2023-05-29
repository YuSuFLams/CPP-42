/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:27:47 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 02:43:11 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
    std::cout << "Dog       :Default Constructor Called"<< std::endl;
    this->c_brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Dog       :Destructor Called" << std::endl;
    delete (this->c_brain);
}

Dog::Dog(Dog const &str):Animal(str)
{
    std::cout << "Dog       :Copy Constructor Called" << std::endl;
}

Dog &Dog::operator=(Dog const &raw)
{
    std::cout << "Dog       :Copy Assignment Operator Constructor" << std::endl;
    if (this != &raw)
    {
        this->type = raw.type;
        *this->c_brain = *raw.c_brain;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog sound: Woof..  Woof..!" << std::endl;
}
