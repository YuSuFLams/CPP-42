/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:47:17 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/28 20:07:22 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
    private:

    public:
        Cat();
        Cat(Cat const &str);
        Cat &operator=(Cat const &raw);
        ~Cat();
    
        virtual void    makeSound() const;
};

#endif