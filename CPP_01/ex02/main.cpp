/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 00:02:26 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/25 00:09:46 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string stringSTD = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringSTD;
    std::string &stringREF = stringSTD;

    std::cout << "Memory :" << std::endl;
    std::cout << &stringSTD << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    
    std::cout << "----------><----------" << std::endl;

    std::cout << "Value :" << std::endl;
    std::cout << stringSTD << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;

    return 0;
}