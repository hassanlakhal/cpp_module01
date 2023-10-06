/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:56:37 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/04 22:05:43 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
class Zombie
{
	private:
		std::string name;
	public:
		void announce( void );
		Zombie( std::string name );
		~Zombie( void );

};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
