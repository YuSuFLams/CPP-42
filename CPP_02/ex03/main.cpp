/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 21:44:23 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/30 19:21:27 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
    Point a(1, 2);
    Point b(10, 3);
    Point c(-4, 10);
    
    Point pts_1(1, 3);
    Point pts_2(-4, 9);

    bool area_c = bsp(a, b, c, pts_1);
    bool area_w = bsp(a, b, c, pts_2);
    
    std::cout << std::endl;
    std::cout << " *******     Correct Test     ******* " << std::endl;
    if (area_c == true) 
        std::cout << "\033[33;4mPoint You Give Me Is In Inside This Triangle !.\033[0m" << std::endl;
    else 
        std::cout << "\033[36;4mPoint You Give Me Is Not found In This Triangle !.\033[0m" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << " *******     Wrong Test     ******* " << std::endl;
    if (area_w == true) 
        std::cout << "\033[33;4mPoint You Give Me Is In Inside This Triangle !.\033[0m" << std::endl;
    else 
        std::cout << "\033[36;4mPoint You Give Me Is Not found In This Triangle !.\033[0m" << std::endl;
    std::cout << std::endl;

    return 0;
}

