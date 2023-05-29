/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:43:17 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 23:50:13 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::cout << std::endl;
    ClapTrap claptrap("Youssef");
    std::cout << std::endl;
    claptrap.attack("YOU...");
    std::cout << std::endl;
    claptrap.takeDamage(3);
    std::cout << std::endl;
    claptrap.beRepaired(4);
    return 0;
}