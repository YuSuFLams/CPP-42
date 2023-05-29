/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 01:27:18 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 04:40:27 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.Hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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
