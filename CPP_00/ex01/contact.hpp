/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:58:15 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/23 18:48:57 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class contact
{
    
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nick_name;
        std::string _phone_number;
        std::string _darkest_secret;
        int index;

    public:
        contact();
        ~contact();
        
        std::string get_fname() const;
        std::string get_lname() const;
        std::string get_nname() const;
        std::string get_pnumber() const;
        std::string get_dsecret() const;

        void    set_fname(std::string first_name);
        void    set_lname(std::string last_name);
        void    set_nname(std::string nick_name);
        void    set_pnumber(std::string phone_number);
        void    set_dsecret(std::string darkest_secret);
};


#endif