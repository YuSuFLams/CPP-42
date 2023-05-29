/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:27:18 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 01:39:20 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.Hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *c_brain;
    public:
        Dog();   
        Dog(Dog const &str);
        Dog &operator=(Dog const &raw);
        virtual ~Dog();
        
        void makeSound() const;   
};



#endif
