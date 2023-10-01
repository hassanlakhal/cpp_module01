/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:56:33 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/29 09:37:52 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
	Zombie *A = newZombie("Foddeddddo");
	Zombie *B = newZombie("Hassan");
	A->announce();
	B->announce();
	randomChump("Test");
	delete A;
	delete B;
}
