/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 18:03:43 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/29 16:22:26 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"
#include"HumanA.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob ", club);
	bob.attack();
	club.setType("type B");
	bob.attack();
	club.setType("type C");
	bob.attack();
}
