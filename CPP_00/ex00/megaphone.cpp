/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:40:25 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/22 20:47:01 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

char *to_upper(char *s)
{
    int i;

    i = -1;
    while (*(s + (++i)))
        *(s + i) = toupper(*(s + i));
    return (s);
}

int main(int ac, char **str)
{
    int i;
    
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    i = 1;
    while (i < ac)
    {
        std::cout << to_upper(str[i]);
        i++;
    }
    std::cout << std::endl;
    return 0;
}
