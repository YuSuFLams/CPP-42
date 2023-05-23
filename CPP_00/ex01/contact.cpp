/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:58:17 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/23 19:42:52 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact()
{
}

contact::~contact()
{
}

std::string contact::get_fname() const
{
    return (this->_first_name);
}

std::string contact::get_lname() const
{
    return (this->_last_name);
}

std::string contact::get_nname() const
{
    return (this->_nick_name);
}

std::string contact::get_pnumber() const
{
    return (this->_phone_number);
}

std::string contact::get_dsecret() const
{
    return (this->_darkest_secret);
}

void    contact::set_fname(std::string first_name)
{
    this->_first_name = first_name;
}

void    contact::set_lname(std::string last_name)
{
    this->_last_name = last_name;
}

void    contact::set_nname(std::string nick_name)
{
    this->_nick_name = nick_name;
}

void    contact::set_pnumber(std::string phone_number)
{
    this->_phone_number = phone_number;
}

void    contact::set_dsecret(std::string darkset_secret)
{
    this->_darkest_secret = darkset_secret;
}
