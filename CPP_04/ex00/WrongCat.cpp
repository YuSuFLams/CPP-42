/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:38:54 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/28 22:07:14 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Default Constructor Called"<< std::endl;
}

WrongCat::WrongCat(WrongCat const &str):WrongAnimal(str)
{
    std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &raw)
{
    std::cout << "WrongCat Copy Assignment Operator Constructor" << std::endl;
    if (this != &raw)
        this->type = raw.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound!." << std::endl;
}
