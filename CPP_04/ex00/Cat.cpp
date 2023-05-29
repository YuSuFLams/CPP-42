/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:47:22 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/28 22:07:29 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat Default Constructor Called"<< std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor Called" << std::endl;
}

Cat::Cat(Cat const &str):Animal(str)
{
    std::cout << "Cat Copy Constructor Called" << std::endl;
}

Cat &Cat::operator=(Cat const &raw)
{
    std::cout << "Cat Copy Assignment Operator Constructor" << std::endl;
    if (this != &raw)
        this->type = raw.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat sound: Meow..  Meow..!" << std::endl;
}
