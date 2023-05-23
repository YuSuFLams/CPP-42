/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 20:03:19 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/23 20:09:01 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "contact.hpp"

class phonebook
{
    private:
    
    public:
        phonebook();
        ~phonebook();
        void    add_command();
        void    search_command();
        
};


#endif