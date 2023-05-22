/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:58:17 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/22 21:24:01 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact()
{
}  

contact::~contact()
{
}

std::string contact::get_fname(void) const
{
    return (_first_name);
}

void contact::set_fname(std::string _firstname)
{
    _first_name = _firstname;
}

std::string contact::get_lname(void) const
{
    return (_last_name);
}

void contact::set_lname(std::string _lastname)
{
    _last_name = _lastname;
}

std::string contact::get_nname(void) const
{
    return (_nick_name);
}

void contact::set_nname(std::string _nickname)
{
    _nick_name = _nickname;
}

std::string contact::get_pnumber(void) const
{
    return (_phone_number);
}

void    contact::set_pnumber(std::string _phonenumber)
{
    _phone_number = _phonenumber;
}

std::string contact::get_dsecret(void) const
{
    return (_darkest_secret);
}

void    contact::set_dsecret(std::string _darkestsecret)
{
    _darkest_secret = _darkestsecret;
}
