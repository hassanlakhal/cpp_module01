/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FilesName.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:37:18 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/08/04 19:42:45 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FilesName.hpp"

// void parssing_file()
// {

// }
FilesName::FilesName()
{
	this->id_of_string = new int[3];
	this->id_of_string[0] = 0;
	this->id_of_string[1] = 0;
	this->id_of_string[2] = 0;
}

FilesName::~FilesName()
{
	delete[] this->id_of_string;
}
void FilesName::add_info(std::string &arg, int index)
{
	if (index == 1)
	{
		this->name_file = arg;
		this->id_of_string[0] = 1;
	}
	else if(index == 2)
	{
		this->s1 = arg;
		this->id_of_string[1] = 2;
	}
	else if(index == 3)
	{
		this->s2 = arg;
		this->id_of_string[2] = 3;
	}
}


std::string FilesName::ft_reaplace(std::string file, std::string s1, std::string s2)
{

	size_t postion = 0;
	size_t old_postion = 0;
	std::string new_string;
	while ((postion = file.find(s1,postion)) != std::string::npos)
	{
		new_string += file.substr(old_postion,postion - old_postion);
		new_string.append(s2);
		old_postion = postion;
		file.erase(postion,s1.length());
	}
	new_string += file.substr(old_postion);
	return new_string;
}

void FilesName::check_errors()
{
	int i;
	i = 1;
	std::ifstream infile(this->name_file);

	if (!this->name_file.length() || !this->s1.length() || !this->s2.length())
	{
		std::cerr << "arg is emty" << std::endl;
		exit(1);
	}
	if(!infile.is_open() && this->id_of_string[0] == 1)
	{
		std::cerr << "Failed error in name of file" << std::endl;
		exit(1);
	}
	std::string line;
	std::string file;
	while (std::getline(infile, line))
	{
		file.append(line);
		if(line.find(0,line.length(),'\n'))
			file.append("\n");
	}
	std::ofstream osf(name_file + ".replace");
	file = ft_reaplace(file,this->s1,this->s2);
	osf << file;
	osf.close();
}

