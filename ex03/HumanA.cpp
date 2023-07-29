/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:58:28 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/30 00:54:44 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"HumanA.hpp"

void HumanA::attack()
{
	const std::string& weapon_type = this->_club.getType();
	std::cout << this->name << " attacks with their ";
	std::cout << weapon_type << std::endl;
}

HumanA::HumanA(std::string name, Weapon& club) : _club(club)
{
	this->name = name;
}

HumanA::~HumanA()
{

}
