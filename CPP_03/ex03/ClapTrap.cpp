/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:43:19 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 19:39:39 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): name(name)
{
    std::cout << "ClapTrap " << this->name << " Constructor Called" << std::endl;
    this->Hitpoint = 10;
    this->Energypoint = 10;
    this->Attackdamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
    *this = clap;
    std::cout << "ClapTrap " << this->name << " Copy Constructor Called" << std::endl;
}

ClapTrap&		ClapTrap::operator=( ClapTrap const & clap )
{
    if (this != &clap)
    {
        this->name = clap.getName();
        this->Hitpoint = clap.getH_Points();
        this->Energypoint = clap.getE_Points();
        this->Attackdamage = clap.getA_Damage();
    }
    std::cout << "ClapTrap " << this->name << " Assignment Operator Called" << std::endl;
    return (*this);
}

std::string ClapTrap::getName() const
{
    return (this->name);    
}

int ClapTrap::getH_Points() const
{
    return (this->Hitpoint);
}

int ClapTrap::getE_Points() const
{
    return (this->Energypoint);
}

int ClapTrap::getA_Damage() const
{
    return (this->Attackdamage);
}

void    ClapTrap::setName(std::string _name)
{
    this->name = _name;
}

void    ClapTrap::setH_Points(int _HitP)
{
    this->Hitpoint = _HitP;
}

void    ClapTrap::setE_Points(int _EnrP)
{
    this->Energypoint = _EnrP; 
}

void    ClapTrap::setA_Damage(int _AttD)
{
    this->Attackdamage = _AttD;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->Hitpoint > 0 && this->Energypoint > 0)
    {
        std::cout << "ClapTrap "<< this->name <<" attacks " << target ;
        std::cout << ", causing "<<this->Attackdamage <<" points of damage!" << std::endl;
        this->Energypoint--;
    }
    else if (this->Hitpoint == 0)
    {
        std::cout << "ClapTrap " << this->name << " not attack " << target;
        std::cout << ", because he has no energy." << std::endl;
    }
    else if (this->Hitpoint == 0)
    {
        std::cout << "ClapTrap " << this->name << " not attack " << target;
        std::cout  << ", because he has no Hit Point." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hitpoint > 0)
    {
        std::cout << "ClapTrap " << this->name << " has lost " << amount << " points." << std::endl;
        this->Hitpoint -= amount;
    }
    else
        std::cout << "ClapTrap " << this->name << " is dead!." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Hitpoint > 0 && this->Energypoint > 0)
    {
        std::cout << "ClapTrap " << this->name << " has restored " << amount << " hit points!" << std::endl;
        this->Energypoint -= 1;
        this->Hitpoint += amount;
    }
    else if (!this->Energypoint)
        std::cout << "ClapTrap " << this->name << " he has no energy!." << std::endl;
}