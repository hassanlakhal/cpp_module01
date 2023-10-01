/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:03:43 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/29 11:44:01 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"
#include"HumanA.hpp"
#include"HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob ", club);
		bob.attack();
		club.setType("type B");
		bob.attack();
		club.setType("type C");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
	//	jim.setWeapon(club);
		jim.attack();
		HumanB hassan("hassan");
		club.setType("type C");
		hassan.setWeapon(club);
		hassan.attack();
	}
	return 0;
}
