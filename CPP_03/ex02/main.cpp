/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:43:17 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 20:14:57 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    std::cout << std::endl;
    FragTrap fragtrap("Youssef");
    std::cout << std::endl;
    fragtrap.attack("you!.");
    std::cout << std::endl;
    fragtrap.takeDamage( 10 );
    std::cout << std::endl;
    fragtrap.beRepaired( 10 );
    std::cout << std::endl;
    fragtrap.highFivesGuys();
    
    return 0;
}
