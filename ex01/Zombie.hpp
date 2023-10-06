/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 18:13:57 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/04 22:04:40 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
class Zombie
{
	private:
		std::string name;
	public:
		void announce( void );
		Zombie();
		Zombie (const std::string name);
		~Zombie (void);
};
Zombie* zombieHorde( int N, std::string name );
