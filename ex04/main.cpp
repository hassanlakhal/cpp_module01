/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:00:59 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/01 21:30:17 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FilesName.hpp"

int main(int argc, char **argv)
{
	int i;
	i = 1;
	FilesName small_file;
	const char *dir;
	//struct stat ab;
	if(argc == 4)
	{
		dir = argv[1];
		while(i < 4)
		{
			std::string inputFileName(argv[i]);
			small_file.add_info(inputFileName,i);
			i++;
		}
		if(!chech_type(dir))
		{
			std::cerr << argv[1] << " is not file " << std::endl;
			return 1;
		}
		small_file.check_errors();
	}
	else
		std::cout << "You have error in form args !!" << std::endl;
}
