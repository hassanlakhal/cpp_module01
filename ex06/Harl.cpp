/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:52:37 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/01 02:30:33 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"


void Harl::debug()
{
    std::cout << " [DEBUG] " << std::endl;
	std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger.\
I really do!" << std::endl;
}
void Harl::info()
{
    std::cout << " [INFO] " << std::endl;
	std::cout << "I cannot believe adding extra bacon \
costs more money. You didn’t put \
enough bacon in my burger! If you did, \
I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning()
{
    std::cout << " [WARNING] " << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\
I’ve been coming for years whereas you \
started working here since last month."<< std::endl;
}
void Harl::error()
{
    std::cout << " [ERROR] " << std::endl;
	std::cerr << "This is unacceptable! I want to\
speak to the manager now." << std::endl;
}

int Harl::getType(std::string str)
{
    int i;
    i = 0;
    std::string  const table[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (i < 4)
    {
        if (table[i] == str)
            return i + 1;
        i++;
    }
    return 0;
}


Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::ft_harf(std::string str)
{
    Harl obj;
    int i;
    void (Harl::*ptrFunction[4])()= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int a;
    a = getType(str);
    i = a - 1;
    switch (a)
    {
        case 1:
        case 2:
        case 3:
        case 4:
            while (i < 4)
            {
                (obj.*ptrFunction[i])();
                i++;
            }
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}