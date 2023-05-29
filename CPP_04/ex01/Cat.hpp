/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:32:14 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 00:47:13 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *c_brain;
    public:
        Cat();
        Cat(Cat const &str);
        Cat &operator=(Cat const &raw);
        virtual ~Cat();
    
        virtual void    makeSound() const;
};

#endif