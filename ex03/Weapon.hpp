/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:37:30 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/30 18:31:12 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<string>
#include<iostream>

class Weapon
{
	private:
		std::string type;
	public:
		void setType(std::string);
		const std::string& getType() const;
		Weapon(std::string type);
		~Weapon();
};


#endif
