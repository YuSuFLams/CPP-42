/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 00:38:04 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/25 00:57:48 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();

        void    announce( void );
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif
