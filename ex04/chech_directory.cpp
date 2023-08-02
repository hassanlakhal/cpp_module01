/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chech_directory.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:26:06 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/08/02 19:45:31 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FilesName.hpp"

bool is_folder(const std::string &path)
{
	struct stat Stat;
	if(stat(path.c_str(), &Stat) == 0)
		return (S_ISDIR(Stat.st_mode));
	return false;
}

bool chech_type(const char *path)
{

	std::string inputFileName(path);
	if(is_folder(inputFileName))
		return false;
	return true;
}
