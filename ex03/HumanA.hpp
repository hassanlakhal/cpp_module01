/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:20:45 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/29 16:23:30 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>

#include"Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon& _club;
public:
	HumanA(std:: string name, Weapon& club);
	~HumanA();
	void attack();
};
