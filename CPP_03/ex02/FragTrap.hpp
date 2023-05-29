/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 05:57:28 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 06:56:08 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap(std::string Name);
		FragTrap( FragTrap const &fragtrap );
		~FragTrap();

		FragTrap&   operator=( FragTrap const &frag );

		void attack(const std::string& target);

		void highFivesGuys();
};


#endif