/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 03:42:18 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/25 06:08:32 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void    Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup ";
    std::cout << "burger. I really do! "<< std::endl;
}

void    Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put";
    std::cout << " enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for ";
    std::cout << "years whereas you started working here since last month." << std::endl;
}

void    Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std:: endl;
}

void    Harl::complain(std::string level)
{
    void (Harl::*m_func[4])(void) = {
        &Harl::warning,
        &Harl::error, 
        &Harl::info, 
        &Harl::debug
    };
    std::string str[4] = { 
        "warning", 
        "error",
        "info", 
        "debug", 
    };
    int i = -1;
    while (++i < 4)
        if (str[i] == level)
            break ;
    switch (i)
    {
        case 0:
            std::cout << "\033[1;32m[ WARNING ] :\033[0m" << std::endl;
            (this->*m_func[0])();
             __attribute__ ((fallthrough));
        case 1:
            std::cout << "\033[1;32m[ ERROR ] :\033[0m" << std::endl;
            (this->*m_func[1])();
             __attribute__ ((fallthrough));
        case 2:
            std::cout << "\033[1;32m[ INFO ] :\033[0m" << std::endl;
            (this->*m_func[2])();
             __attribute__ ((fallthrough));
        case 3:
            std::cout << "\033[1;32m[ DEBUG ] :\033[0m" << std::endl;
            (this->*m_func[3])();
            break ;
        default:
            std::cout << "\033[1;31m[ Probably complaining about insignificant problems ]\033[0m" << std::endl; 
    }
}