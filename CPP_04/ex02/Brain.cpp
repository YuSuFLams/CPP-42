/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 00:14:17 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/29 02:20:01 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain     :Default Constructor Called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain     :Destructor Called" << std::endl;
}

Brain::Brain(Brain const &str)
{
    std::cout << "Brain     :Copy Constructor Called" << std::endl;
    *this = str;
}

Brain  &Brain::operator=(Brain const &raw)
{
    std::cout << "Brain     :Copy Assignment Operator Constructor" << std::endl;
    if (this != &raw)
        for (int i = 0; i < 100; i++)
            this->ideas[i] = raw.ideas[i];
    return (*this);
}

void    Brain::setIdeas(size_t ind, std::string idea)
{
    if (ind < 99)
        this->ideas[ind] = idea;
}

std::string Brain::getIdeas(size_t  ind) const
{
    if (ind > 99)
        std::cout << "This Index :" << ind << " Is Out Of Range!." << std::endl;
    return(this->ideas[ind]);
}