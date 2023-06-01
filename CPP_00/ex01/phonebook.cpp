/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:51:42 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 22:45:42 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

std::string Phonebook::set_str(std::string str)
{
    if (str.length() < 10)
    {
        while (str.length() < 10)
            str.push_back(' ');
    }
    else if (str.length() > 10)
    {
        str = str.substr(0, 9);
        str.push_back('.');
    }
    else
        return (str);
    return (str);   
}

std::string Phonebook::test_phone(std::string phone_number)
{
    int i = -1;

    while (phone_number[++i])
    {   
        if (!std::isdigit(phone_number[i])) {
            std::cout << "Your Number Phone Should Be Numbers Only!." << std::endl;
            break ;
        }
    }
    return (phone_number);
}

std::string Phonebook::test_index(std::string index)
{
    int i = -1;

    while (index[++i])
    {   
        if (!std::isdigit(index[i])) {
            std::cout << "Your Index Should Be Valid!." << std::endl;
            break ;
        }
    }
    return (index);
}

bool Phonebook::all_digit(std::string pn)
{
    int i = -1;

    while (pn[++i])
    {
        if (!std::isdigit(pn[i]))
            return (false);
    }
    return (true);
}

void    Phonebook::add_command()
{
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;
    static int index;
    Contact n_contact;

    std::cout << "Entre First Name :";
    std::getline(std::cin, first_name);
    
    std::cout << "Entre Last Name :" ;
    std::getline(std::cin, last_name);
    
    std::cout << "Entre Nick Name :" ;
    std::getline(std::cin, nick_name);
    
    do
    {
        std::cout << "Entre Phone Number :" ;
        std::getline(std::cin, phone_number);
        phone_number = test_phone(phone_number);
    }while (!all_digit(phone_number));
    
    std::cout << "Entre Darkset Secret :" ;
    std::getline(std::cin, darkest_secret);
    
    n_contact = Contact(set_str(first_name), set_str(last_name), set_str(nick_name), \
    set_str(phone_number), set_str(darkest_secret));
    contact_p[index % 8] = n_contact;
    index++;
}

void    Phonebook::Show_4_columns()
{
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "||  INDEX   |FIRST NAME|LAST  NAME|NICK  NAME||" << std::endl;
    std::cout << "||----------|----------|----------|----------||" << std::endl;
    
    for (int i = 0; i < 8; i++)
    {
        if(contact_p[i].getF_Name().length() <= 0)
			break;
        std::cout << "||" << std::setw(5) << i << std::setw(6) << "|";
		std::cout << contact_p[i].getF_Name() << "|" << contact_p[i].getL_Name() << "|" \
        << contact_p[i].getN_name() << "||" << std::endl;
        std::cout << "-----------------------------------------------" << std::endl;
    }
}

void    Phonebook::Show_all_columns()
{
    int index;
	std::string str;

    do
    {
        std::cout << "Enter index You Want To I Show You His Information: ";
        std::getline(std::cin,str);
        str = test_index(str);
    }while (!all_digit(str));
    
    if (std::cin.good())
        index = atoi(str.c_str());
    
    if (index < 0 || index > 7)
    {
        std::cout << "Your Index Is Out Of Range!." << std::endl;
        return ;
    }
    
    if (index >= 0 && index <= 7 && contact_p[index].getF_Name().length() <= 0)
    {
        std::cout << "Index Your Entry Is Empty In Contact!." << std::endl;
        return ;
    }

    std::cout << "---------------------------------------------------------------------" << std::endl;
    std::cout << "||  Index   |First Name|Last  Name|Nick  Name|Phone Numb|Darset Sec||" << std::endl;
    std::cout << "||----------|----------|----------|----------|----------|----------||" << std::endl;

    std::cout << "||" << std::setw(5) << index << std::setw(6) << "|";
    std::cout << contact_p[index].getF_Name() << "|" << contact_p[index].getL_Name() << "|" \
    << contact_p[index].getN_name() << "|" << contact_p[index].getP_Number() << "|" << contact_p[index].getD_Secret() \
    << "||" << std::endl;
    std::cout << "---------------------------------------------------------------------" << std::endl;
}

void    Phonebook::search_command()
{
    Show_4_columns();
    Show_all_columns();
}