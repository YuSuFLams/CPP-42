/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:32:49 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/30 00:37:04 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    int N;
    
    std::cout << "Entre number repete: ";
    std::cin >> N; 
    AAnimal *animal[N];
    for (int i = 0; i < N; i++) 
    {
        if (i % 2)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }
    std::cout << std::endl;
    std::cout << std::endl;

	for (int i = 0; i < N; i++)
	{
		std::cout << animal[i]->getType() << std::endl;
        animal[i]->makeSound();
	}
    std::cout << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < N; i++)
        delete animal[i];
    
    return 0;
}

