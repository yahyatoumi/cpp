/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:11:06 by ytoumi            #+#    #+#             */
/*   Updated: 2023/07/10 11:11:07 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	put_line(std::string line, std::string s1, std::string s2, std::ofstream &of)
{
	int i;
	int j;
	std::string holder;

	i = 0;
	while ((unsigned long)i <  line.length()){
		if (line[i] != s1[0])
			of << line[i];
		else{
			j = 0;
			holder = "";
			while (line[i] == s1[j] && line[i])
			{
				holder += line[i];
				i++;
				j++;
			}
			if ((unsigned long)j == s1.length())
			{
				of << s2;
			}
			else
				of << holder;
			i--;
		}
		i++;
	}
	of << std::endl;
}

int main(int ac, char *av[])
{
	std::string buff;
	if (ac != 4)
	{
		std::cout << "4 args !!!!" << std::endl;
		return 0;
	}
	std::ifstream ifs(av[1]);
	if (!ifs)
	{
		std::cout << "Failed to open the file" << std::endl;
		return 0;
	}
	std::string replaced_file(av[1]);
	std::ofstream of(replaced_file + ".replace");
	if (!of)
	{
		std::cout << "Failed to create the output file" << std::endl;
		return 0;
	}
	while (std::getline(ifs, buff)){
		put_line(buff, av[2], av[3], of);
	}
	ifs.close();
	of.close();
}
