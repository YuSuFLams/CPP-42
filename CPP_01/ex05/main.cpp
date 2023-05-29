/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 03:55:19 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/25 04:32:23 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "\033[1;31m[ WARNING ] :\033[0m" << std::endl;
        harl.complain("warning");
    std::cout << "\033[1;32m[ ERROR ] :\033[0m" << std::endl; 
        harl.complain("error");
    std::cout << "\033[1;33m[ INFO ] :\033[0m" << std::endl;
        harl.complain("info");
    std::cout << "\033[1;34m[ DEBUG ] :\033[0m" << std::endl;
        harl.complain("debug");
    return 0;
}
