/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:58:15 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/22 21:23:27 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

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

        void    set_fname(std::string _firstname);
        void    set_lname(std::string _lastname);
        void    set_nname(std::string _nickname);
        void    set_pnumber(std::string _phonenumber);
        void    set_dsecret(std::string _darkestsecret);
};


#endif