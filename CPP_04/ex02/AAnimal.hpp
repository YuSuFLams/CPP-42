/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 23:58:22 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 04:36:30 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(AAnimal const &str);
        virtual ~AAnimal();
        AAnimal  &operator=(AAnimal const &raw);

        void    setType(std::string _type);
        std::string getType() const;

        virtual void    makeSound() const;
};


#endif
