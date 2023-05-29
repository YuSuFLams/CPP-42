/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 00:46:00 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/25 00:57:06 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string name;

    std::cout << "Give me STR:";
    std::cin >> name;
    
    std::cout << "Memory Heap:" << std::endl;
    Zombie *zom = newZombie(name);
    
    zom->announce();
    delete zom;
    std::cout << "----------><----------" << std::endl;
    std::cout << "Memory Stack:" << std::endl;
    randomChump(name);
    return 0;
}
