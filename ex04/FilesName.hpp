/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FilesName.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 23:37:49 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/11 14:18:02 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

#include<iostream>
#include<fstream>
#include <string>
#include <cstring>
#include<cstdlib>
#include <sys/stat.h>
#include<unistd.h>
class FilesName
{
private:
	std::string name_file;
	std::string s1;
	std::string s2;
	int id_of_string;
public:
	FilesName();
	~FilesName();
	void add_info(std::string arg, int index);
	void check_errors();
	std::string  ft_reaplace(std::string file, std::string s1, std::string s2);
};
bool chech_type(const char *path);
#endif

