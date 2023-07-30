/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:21:32 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/30 01:58:50 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

void HumanB::attack()
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->type << std::endl;
}
void HumanB::setWeapon(Weapon club)
{
	this->type = club.getType();
}

HumanB::HumanB(std::string name) : name(name)
{

}

HumanB::~HumanB()
{
}
