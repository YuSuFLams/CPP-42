/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 04:54:52 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 19:38:49 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap " << this->name << " Constructor Called" << std::endl;
    this->Hitpoint = 100;
    this->Energypoint = 50;
    this->Attackdamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " Destructor Called" << std::endl;
}

ScavTrap&		ScavTrap::operator=( ScavTrap const & Scav )
{
    if (this != &Scav)
    {
        this->name = Scav.getName();
        this->Hitpoint = Scav.getH_Points();
        this->Energypoint = Scav.getE_Points();
        this->Attackdamage = Scav.getA_Damage();
    }
    std::cout << "ScavTrap " << this->name << " Assignment Operator Called" << std::endl;
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap): ClapTrap(ScavTrap)
{
    std::cout << "ScavTrap " << this->name << " Copy Constructor Called" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->Hitpoint > 0 && this->Energypoint > 0)
    {
        std::cout << "ScavTrap "<< this->name <<" attacks " << target ;
        std::cout << ", causing "<<this->Attackdamage <<" points of damage!" << std::endl;
        this->Energypoint--;
    }
    else if (this->Hitpoint == 0)
    {
        std::cout << "ScavTrap " << this->name << " not attack " << target;
        std::cout << ", because he has no energy." << std::endl;
    }
    else if (this->Hitpoint == 0)
    {
        std::cout << "ScavTrap " << this->name << " not attack " << target;
        std::cout  << ", because he has no Hit Point." << std::endl;
    }
}

void ScavTrap::guardGate()
{
    if (this->Hitpoint > 0 && this->Energypoint)
        std::cout << "ScavTrap " << this->name << " Is Now In Gate Keeper Mode!" << std::endl;
}
