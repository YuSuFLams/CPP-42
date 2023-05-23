/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 20:58:30 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/23 21:32:23 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    // on heap
    Zombie *me = newZombie("youssef");
    me->announce();

    delete me;
    // on stack
    randomChump("holla");
    return (0);
}