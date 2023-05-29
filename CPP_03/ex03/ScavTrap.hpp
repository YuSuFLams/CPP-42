/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 04:54:55 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 19:04:57 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>


class ScavTrap : virtual public ClapTrap
{
    protected:
        
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &ScavTrap);
        ~ScavTrap();

        ScavTrap& operator = (ScavTrap const &Scav);

        void attack(const std::string& target);
        void guardGate();
};


#endif