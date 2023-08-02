/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:00:59 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/08/02 02:50:45 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FilesName.hpp"

int main(int argc, char **argv)
{
	int i;
	i = 1;
	FilesName small_file;
	if(argc == 4)
	{
		while(i < 4)
		{
			std::string inputFileName(argv[i]);
			small_file.add_info(inputFileName,i);
			i++;
		}
		small_file.check_errors();
	}
	else
		std::cout << "You have error in form args !!" << std::endl;
}
