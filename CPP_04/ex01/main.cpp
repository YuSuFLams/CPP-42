/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:32:49 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 03:38:03 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    int N;
    
    std::cout << "Entre number repete: ";
    std::cin >> N; 
    Animal *animal[N];
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
	}
    std::cout << std::endl;
    std::cout << std::endl;
    for (int i = 0; i < N; i++)
        delete animal[i];
    return 0;
}

