/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:58:12 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/23 20:19:14 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    phonebook::add_command()
{
    contact new_contact;
    std::string input;    

    std::cout << "First Name :";
    getline(std::cin, input);
    if (!input.empty())
        new_contact.set_fname(input);

    std::cout << "Last Name :";
    getline(std::cin, input);
    if (!input.empty())
        new_contact.set_lname(input);

    std::cout << "Nick Name :";
    getline(std::cin, input);
    if (!input.empty())
        new_contact.set_nname(input);

    std::cout << "Phone Number :";
    getline(std::cin, input);
    if (!input.empty())
        new_contact.set_pnumber(input);

    std::cout << "Darkest Secret :";
    getline(std::cin, input);
    if (!input.empty())
        new_contact.set_dsecret(input);
}