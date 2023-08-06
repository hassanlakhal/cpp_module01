/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:52:12 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/08/06 02:16:31 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include <typeinfo>
class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Harl();
	~Harl();
	void get_level(std::string (&level)[4], void (Harl::*ptrFunc[])());
	void complain( std::string level );
};

