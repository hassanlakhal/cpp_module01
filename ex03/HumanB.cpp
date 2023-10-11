/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:21:32 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/11 17:34:04 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

void HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " ma3aaaaandoch slah "	<< std::endl;
}

void HumanB::setWeapon(Weapon &club)
{
	this->weapon = &club;
}

HumanB::HumanB(std::string name) : name(name) , weapon(NULL)
{	
}

HumanB::~HumanB()
{
}
