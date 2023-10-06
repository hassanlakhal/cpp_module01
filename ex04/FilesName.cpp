/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FilesName.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:37:18 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/06 08:09:42 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FilesName.hpp"

FilesName::FilesName()
{
	this->id_of_string = 0;
}

FilesName::~FilesName()
{
}
void FilesName::add_info(std::string &arg, int index)
{
	if (index == 1)
	{
		this->name_file = arg;
		this->id_of_string = 1;
	}
	else if(index == 2)
	{
		this->s1 = arg;
	}
	else if(index == 3)
	{
		this->s2 = arg;
	}
}


std::string FilesName::ft_reaplace(std::string file, std::string s1, std::string s2)
{
    if (s1.empty())
        return file;
    std::string new_string;
    size_t position = 0;

    while (true) 
	{
		position = file.find(s1, position); 
		if (position == std::string::npos)
			break;
        new_string += file.substr(0, position);
        new_string += s2;
        position += s1.length();
        file = file.substr(position);
        position = 0;
    }
    new_string += file;
    return new_string;
}


void FilesName::check_errors()
{
	std::fstream infile;
	int i;
	infile.open((this->name_file.c_str()),std::ios::out | std::ios::in);
	if (!this->name_file.length())
	{
		std::cerr << "arg is emty" << std::endl;
		exit(1);
	}
	if(!infile.is_open() && this->id_of_string == 1)
	{
		std::cerr << "Failed error in name of file" << std::endl;
		exit(1);
	}
	std::string line;
	std::string file;
	i = 0;
	while (std::getline(infile, line))
	{
		file.append(line);
		if (line.find('\n') == std::string::npos)
			file.append("\n");
		i++;
	}
	if (i == 1)
		file = ft_reaplace(file,"\n","\0");
	std::ofstream osf((this->name_file + ".replace").c_str());
	file = ft_reaplace(file,this->s1,this->s2);
	osf << file;
	osf.close();
	infile.close();
}

