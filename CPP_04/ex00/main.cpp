/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:52:36 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 03:55:58 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    std::cout << std::endl;
    std::cout << "**** WrongCat & WrongAnimal ****" << std::endl;
    WrongAnimal *Wrong_meta = new WrongAnimal();
    WrongAnimal *Wrong_Cat = new WrongCat();
    std::cout << std::endl;
    std::cout << Wrong_Cat->getType() << " " << std::endl;
    std::cout << Wrong_meta->getType() << " " << std::endl;
    std::cout << std::endl;
    Wrong_Cat->makeSound();
    Wrong_meta->makeSound();
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
    delete Wrong_meta;
    delete Wrong_Cat;
    return 0;
}
