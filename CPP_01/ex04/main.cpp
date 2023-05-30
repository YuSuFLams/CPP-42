/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylamsiah <ylamsiah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 00:44:52 by ylamsiah          #+#    #+#             */
/*   Updated: 2023/05/30 05:21:08 by ylamsiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <fstream>

std::string replace_new(std::string f_name, std::string str1, std::string str2)
{
    int find = 0;

    find = f_name.find(str1, find);
    while (find != -1)
    {
        f_name.erase(find, str1.length());
        f_name.insert(find, str2);
        find = f_name.find(str1, find);
    }
    return (f_name);
}

int main(int ac, char **str)
{

    if (ac != 4)
    {
        std::cout << "Number Argument So Wrong !..." << std::endl;
        std::cout << "Usage: ./replace <fileName> <string1:to find> <string2:to replace>" << std::endl;
        exit(EXIT_FAILURE);
    }
    
    std::string filename = str[1];
    std::string old_s = str[2];
    std::string new_s = str[3];
    std::string line;
    
    if (old_s.empty() || new_s.empty())
    {
        std::cout << "ERROR :Empty arguments!!" << std::endl;
        exit(EXIT_FAILURE);
    }
    std::ifstream   old_file(filename.c_str());
    if (old_file.is_open())
    {
        filename.append(".replace");
        std::ofstream new_file(filename.c_str());
        if (!new_file.is_open())
        {
            std::cout << "Cannot Open This File!." <<std::endl;
            exit(EXIT_FAILURE);
        }
        while (getline(old_file, line))
        {
            line = replace_new(line, old_s, new_s);
            new_file << line;
            if (old_file.eof())
                break ;    
			new_file << std::endl;
        }
        old_file.close();
        new_file.close();
    }
    else
    {
        std::cout << "Cannot Open This File!." <<std::endl;
        exit(EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}
