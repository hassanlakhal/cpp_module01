/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:13:23 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/29 09:39:26 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	int i;
	i = 0;
	Zombie *A = zombieHorde(7,"TesT");
	while(i < 7)
	{
		A[i].announce();
		i++;
	}
	delete [] A;
}
