/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 00:46:00 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/25 01:20:12 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string name;
    int numb;

    std::cout << "Give me Name: ";
    std::cin >> name;
    std::cout << "Give me Repeat Number: ";
    std::cin >> numb;
    Zombie *zom = zombieHorde(numb, name);
    
    for (int i = 0; i < numb; i++)
        zom->announce();
    delete [] zom;
    return 0;
}
