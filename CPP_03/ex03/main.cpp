/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:43:17 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 20:20:20 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::cout << std::endl;
    DiamondTrap diamondtrap("Youssef");
    std::cout << std::endl;
    diamondtrap.attack("you!.");
    std::cout << std::endl;
    diamondtrap.takeDamage( 10 );
    std::cout << std::endl;
    diamondtrap.beRepaired( 10 );
    std::cout << std::endl;
    diamondtrap.highFivesGuys();
    std::cout << std::endl;
    diamondtrap.whoAmI();
    
    return 0;
}
