/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:34:44 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 04:37:02 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat():AAnimal("Cat")
{
    std::cout << "Cat       :Default Constructor Called"<< std::endl;
    this->c_brain = new Brain;
}

Cat::~Cat()
{
    std::cout << "Cat       :Destructor Called" << std::endl;
    delete (this->c_brain);
}

Cat::Cat(Cat const &str):AAnimal(str)
{
    std::cout << "Cat       :Copy Constructor Called" << std::endl;
}

Cat &Cat::operator=(Cat const &raw)
{
    std::cout << "Cat       :Copy Assignment Operator Constructor" << std::endl;
    if (this != &raw)
    {
        this->type = raw.type;
        this->c_brain = raw.c_brain;
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat sound: Meow..  Meow..!" << std::endl;
}
