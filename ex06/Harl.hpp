/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 22:53:04 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/30 23:38:46 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include<iostream>


class Harl
{
private:
    void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
    static void ft_harf(std::string str);
    static int getType(std::string str);
    Harl();
    ~Harl();
};





#endif