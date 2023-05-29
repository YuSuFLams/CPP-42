/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:43:17 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 20:09:17 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << std::endl;
    ScavTrap scavtrap("Youssef");
    std::cout << std::endl;
    scavtrap.attack("Them..!");
    std::cout << std::endl;
    scavtrap.takeDamage(3);
    std::cout << std::endl;
    scavtrap.guardGate();
    std::cout << std::endl;
    scavtrap.beRepaired(4);
    return 0;
}