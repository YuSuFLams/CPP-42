/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:51:48 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 22:40:55 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>
# include "Contact.hpp"

class Phonebook
{
    private:
        Contact contact_p[8];
    public:
        Phonebook(); 
        ~Phonebook(); 

        std::string test_phone(std::string phone_number);
        std::string set_str(std::string str);
        bool        all_digit(std::string pn);
        std::string test_index(std::string index);

        void        Show_4_columns();
        void        Show_all_columns();
        void        add_command();
        void        search_command();


};

#endif