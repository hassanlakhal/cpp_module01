/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_file.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 22:55:31 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/09/30 01:31:48 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include <string>

// int main()
// {
// 	std::ifstream infile("file.txt");
// 	std::string dest;

// 	infile >> dest ;
// 	std::cout << " test "<< dest << std::endl;
// 	if (!infile.is_open())
// 	{
// 		std::cerr << "Failed" << std::endl;
// 		return 1;
// 	}
// 	// std::string line;
// 	// while (std::getline(infile, line))
// 	// {
// 	// 	std::cout << line << std::endl;
// 	// }
// 	std::ofstream ofs("test.out");
// 	ofs << "test test dsfsdfdsf fdsfdsfdsfdsfdsfdsf " << std::endl;
// 	ofs.close();
// 	return 0;
// }

#include <iostream>
#include <string>

void byPtr(std::string* str)
{
	std::cout << sizeof(str) << std::endl;
	*str += " and ponies";
}

void byConstPtr(std::string const * str)
{
	std::cout << *str << std::endl;
}

void byRef(std::string& str)
{
	std::cout << sizeof(str) << std::endl;
	str += " and ponies";
}

void byConstRef(std::string const & str)
{
	std::cout << "======= " << str << " ======= " << std::endl;
}

int main()
{
	std::string str = "i like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "i like otters";

	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);

	return (0);
}
