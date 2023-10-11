/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:58:28 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/11 14:10:43 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"HumanA.hpp"

void HumanA::attack()
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->_club.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& club) : _club(club)
{
	this->name = name;
}

HumanA::~HumanA()
{

}
