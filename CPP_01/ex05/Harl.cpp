/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 03:42:18 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/25 04:25:47 by ylamsiah         ###   ########.fr       */
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
    for (int i = 0; i < 4; i++)
        if (level == str[i])
            (this->*m_func[i])();
}