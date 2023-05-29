/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:19:13 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/28 20:57:45 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.Hpp"

class Dog : public Animal
{
    private:

    public:
        Dog();   
        Dog(Dog const &str);
        Dog &operator=(Dog const &raw);
        ~Dog();
        
        void makeSound() const;   
};



#endif
