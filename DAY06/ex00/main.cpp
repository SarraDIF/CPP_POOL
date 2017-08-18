//
// Created by BlueSocket on 17/08/2017.
//

#include <string>
#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	int i = 1;
	std::string line;
	std::fstream file;
	if (ac == 1)
	{
		std::cout << "my_cat: Usage : ./my_cat file [...]" << std::endl;
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			file.open(av[i], std::ios::in);
			if (file.is_open())
			{
				while (std::getline(file, line))
					{
						std::cout.write(line, readed);
					}
				file.close();
			}
			else
			{
				std::cerr << "my_cat: <" << av[i] << ">: No such file or directory" << std::endl;
			}
			i++;
		}
	}
	return 0;
}
