/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:16:45 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/20 20:14:50 by hlakhal-         ###   ########.fr       */
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
		Obj[i] = Zombie(name);
		i++;
	}
	return Obj;
}