/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 03:55:19 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/25 06:10:31 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **str)
{
    Harl harl;

    if (ac != 2)
    {
        std::cout << "\033[1;36mMUST BE ARG VALID.\033[0m" << std::endl;
        return (1);
    }
    harl.complain(str[1]);    
    return 0;
}
