/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:51:38 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/27 21:08:49 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "phonebook.hpp"

int main()
{
    Phonebook phonebook_1;
    std::string command;

    while (true)
    {
        std::cout << "Please Entre Your Command : (ADD/EXIT/SEARCH) : ";
        std::getline(std::cin, command);
        if (!(std::cin.good()))
			exit(EXIT_FAILURE);
        if (command == "ADD")
            phonebook_1.add_command();
        else if (command == "SEARCH")
            phonebook_1.search_command();
        else if (command == "EXIT")
        {
            std::cout << "Bye My Dear Friend (See You Soon)!." << std::endl;
            exit (EXIT_SUCCESS);   
        }
        else
            std::cout << "Must Be Valid Command !." << std::endl;
    }
    return (0);
}
