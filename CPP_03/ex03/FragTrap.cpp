/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 06:01:46 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 19:38:15 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap " << this->name << " Constructor Called" << std::endl;
    this->Hitpoint = 100;
    this->Energypoint = 100;
    this->Attackdamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " Destructor Called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragtrap): ClapTrap(fragtrap)
{
    std::cout << "fragTrap " << this->name << " Copy Constructor Called" << std::endl;
}

void    FragTrap::attack(const std::string& target)
{
    if (this->Hitpoint > 0 && this->Energypoint > 0)
    {
        std::cout << "FragTrap "<< this->name <<" attacks " << target ;
        std::cout << ", causing "<<this->Attackdamage <<" points of damage!" << std::endl;
        this->Energypoint--;
    }
    else if (this->Hitpoint == 0)
    {
        std::cout << "FragTrap " << this->name << " not attack " << target;
        std::cout << ", because he has no energy." << std::endl;
    }
    else if (this->Hitpoint == 0)
    {
        std::cout << "FragTrap " << this->name << " not attack " << target;
        std::cout  << ", because he has no Hit Point." << std::endl;
    }
}

FragTrap&		FragTrap::operator=( FragTrap const & frag )
{
    if (this != &frag)
    {
        this->name = frag.getName();
        this->Hitpoint = frag.getH_Points();
        this->Energypoint = frag.getE_Points();
        this->Attackdamage = frag.getA_Damage();
    }   
    std::cout << "FragTrap " << this->name << " Assignment Operator Called" << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys()
{
    if (this->Hitpoint > 0 && this->Energypoint)
        std::cout << "FragTrap " << this->name << " Request High Fives !." << std::endl;
}