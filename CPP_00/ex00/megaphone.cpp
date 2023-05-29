/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 00:20:21 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/25 00:31:59 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string to_upper(std::string s)
{
    int i;

    i = -1;
    while (s[++i])
        s[i] = toupper(s[i]);
    return (s);
}

int main(int ac, char **str)
{
    int i;
    
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    i = 0;
    while (++i < ac)
        std::cout << to_upper(str[i]);
    std::cout << std::endl;
    return 0;
}