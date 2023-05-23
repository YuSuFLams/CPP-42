/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:17:54 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/23 19:47:37 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
    phonebook phonebook_1;
    std::string command;

    while (true)
    {
        std::cout << "Please Entre Your Command : (ADD/EXIT/SEARCH) : ";
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook_1.add_command();
        else if (command == "SEARCH")
            phonebook_1.search_command();
        else if (command == "EXIT")
        {
            std::cout << "BYE MY DEAR FRIEND !." << std::endl;
            exit (0);   
        }
        else
        {
            std::cout << "Must Be Valid Command !." << std::endl;
        }
    }
    return (0);
}
