/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_folder.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:09:38 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/08/02 19:24:15 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sys/stat.h>

bool	isRegularFile(const std::string &path)
{
	struct stat	Stat;

	if (stat(path.c_str(), &Stat) == 0)
	{
		return (S_ISREG(Stat.st_mode));
	}
	return (false);
}

bool	isDirectory(const std::string &path)
{
	struct stat	pathStat;

	if (stat(path.c_str(), &pathStat) == 0)
	{
		return (S_ISDIR(Stat.st_mode));
	}
	return (false);
}

int	main(void)
{
	std::string path = "ex04/";
	if (isRegularFile(path))
	{
		std::cout << "It is a regular file!" << std::endl;
	}
	else if (isDirectory(path))
	{
		std::cout << "It is a directory!" << std::endl;
	}
	else
	{
		std::cout << "It is neither a regular file nor a directory!" << std::endl;
	}
	return (0);
}
