/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:16:45 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/11 17:45:29 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	int i;
	i = 0;
	Zombie *Obj = new Zombie[N];
	while(i < N)
	{
		Obj[i].setZombie(name);
		i++;
	}
	return Obj;
}
