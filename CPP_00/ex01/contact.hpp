/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 21:51:35 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/27 02:30:42 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact
{
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nick_name;
        std::string _phone_number;
        std::string _darkest_secret;
    public:
        Contact();
        ~Contact();
        Contact(std::string f_name, std::string l_name, std::string n_name, std::string p_number, std::string d_secret);
        
        std::string getF_Name() const;
        std::string getL_Name() const;
        std::string getN_name() const;
        std::string getP_Number() const;
        std::string getD_Secret() const;

        void    setF_Name(std::string _firstname);
        void    setL_Name(std::string _lastname);
        void    setN_Name(std::string _nickname);
        void    setP_Number(std::string _phonenumber);
        void    setD_Secret(std::string _darkestsecret);

};

#endif
