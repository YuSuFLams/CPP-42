/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:51:33 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/27 02:30:20 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_number, \
    std::string d_secret)
{
    this->_first_name = f_name;
    this->_last_name = l_name;
    this->_nick_name = n_name;
    this->_phone_number = p_number;
    this->_darkest_secret = d_secret;
}
Contact::~Contact()
{
}

std::string Contact::getF_Name() const
{
    return (this->_first_name);
}

std::string Contact::getL_Name() const
{
    return (this->_last_name);
}

std::string Contact::getN_name() const
{
    return (this->_nick_name);
}

std::string Contact::getP_Number() const
{
    return (this->_phone_number);
}

std::string Contact::getD_Secret() const
{
    return (this->_darkest_secret);
}

void    Contact::setF_Name(std::string fn)
{
    this->_first_name = fn;
}

void    Contact::setL_Name(std::string ln)
{
    this->_last_name = ln;
}

void    Contact::setN_Name(std::string nn)
{
    this->_nick_name = nn;
}

void    Contact::setP_Number(std::string pn)
{
    this->_phone_number = pn;
}

void    Contact::setD_Secret(std::string ds)
{
    this->_darkest_secret = ds;
}