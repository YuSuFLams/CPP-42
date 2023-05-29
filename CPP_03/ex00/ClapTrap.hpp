/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:43:22 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/26 20:10:25 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int Hitpoint;
        int Energypoint;
        int Attackdamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &claptrap);
        ~ClapTrap();

        ClapTrap &		operator=( ClapTrap const & clap );

        std::string getName() const;
		int         getH_Points() const;
		int         getE_Points() const;
		int         getA_Damage() const;
        
        void    setName(std::string Name) ;
		void    setH_Points(int HitP) ;
		void    setE_Points(int EnrP) ;
		void    setA_Damage(int AttD) ;

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif