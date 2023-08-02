/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_file.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 22:55:31 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/07/30 23:34:20 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include <string>

int main()
{
	std::ifstream infile("file.txt");
	std::string dest;

	infile >> dest ;
	std::cout << " test "<< dest << std::endl;
	if (!infile.is_open())
	{
		std::cerr << "Failed" << std::endl;
		return 1;
	}
	// std::string line;
	// while (std::getline(infile, line))
	// {
	// 	std::cout << line << std::endl;
	// }
	std::ofstream ofs("test.out");
	ofs << "test test dsfsdfdsf fdsfdsfdsfdsfdsfdsf " << std::endl;
	ofs.close();
	return 0;
}

