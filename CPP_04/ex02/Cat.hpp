/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:32:14 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 04:37:15 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
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