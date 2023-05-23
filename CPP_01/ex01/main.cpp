/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 21:35:01 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/23 22:54:04 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
# define X 5

int main()
{
    Zombie *zom = zombieHorde(X, "youssef");
    for (int i = 0; i < X; i++)
    {
        zom[i].announce();
    }

    delete[] zom;
    return (0);
}