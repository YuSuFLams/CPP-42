/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:26:59 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/28 22:02:11 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string _type);
        WrongAnimal(WrongAnimal const &str);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(WrongAnimal const &raw);
        
        void        setType(std::string _type);
        std::string getType() const;

        void    makeSound() const;
};

#endif