/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:21:19 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/30 01:54:00 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

class HumanB
{
private:
	std::string name;
	std::string type;
public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon club);
};






