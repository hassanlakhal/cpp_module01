/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:52:28 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/08/06 02:40:58 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
	std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger.\
I really do!" << std::endl;
}
void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon \
costs more money. You didn’t put \
enough bacon in my burger! If you did, \
I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free.\
I’ve been coming for years whereas you \
started working here since last month."<< std::endl;
}
void Harl::error()
{
	std::cerr << "This is unacceptable! I want to\
speak to the manager now." << std::endl;
}
Harl::Harl(){}
Harl::~Harl(){}

void Harl::get_level(std::string (&level)[4], void (Harl::*ptrFunc[])())
{
	(ptrFunc[0] = &Harl::debug , level[0] = "DEBUG");
	(ptrFunc[1] = &Harl::info , level[1] = "INFO");
	(ptrFunc[2] = &Harl::warning , level[2] = "WARNING");
	(ptrFunc[3] = &Harl::error , level[3] = "ERROR");
}

void Harl::complain( std::string level )
{
	Harl obj;
	int i = 0;
	std::string table[4] = {};
	void (Harl::*ptrFunction[4])();
	obj.get_level(table, ptrFunction);
	while(i < 4)
	{
		if(table[i] == level)
		{
			(obj.*ptrFunction[i])();
			break ;
		}
		i++;
	}
	if (i == 4)
		std::cout << "Unknown complaint level: " << level <<std::endl;
}
