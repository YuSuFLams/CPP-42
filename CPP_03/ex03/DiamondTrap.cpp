/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 19:10:47 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 19:51:06 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    this->ClapTrap::name = name + "_clap_name";
    this->Hitpoint = FragTrap::Hitpoint;
    this->Energypoint = ScavTrap::Energypoint;
    this->Attackdamage = FragTrap::Attackdamage;
    std::cout << "DiamondTrap " << this->name << " Constructor Called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " Destructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondtrap)
    : ClapTrap(diamondtrap), ScavTrap(diamondtrap), FragTrap(diamondtrap)
{
    std::cout << "DiamondTrap " << this->name << " Copy Constructor Called" << std::endl;
}

DiamondTrap&		DiamondTrap::operator=( DiamondTrap const & diamond )
{
    if(this != &diamond)
    {
        this->name = diamond.name;
        this->Hitpoint = diamond.Hitpoint;
        this->Energypoint = diamond.Energypoint;
        this->Attackdamage = diamond.Attackdamage;
    }
    std::cout << "DiamondTrap " << this->name << " Assignment Operator Called" << std::endl;
    return (*this);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap Name: " << this->name << " , ";
	std::cout << "ClapTrap Name: " << this->ClapTrap::name << std::endl;
}

void    DiamondTrap::attack(std::string const    &target)
{
    this->ScavTrap::attack(target);
}