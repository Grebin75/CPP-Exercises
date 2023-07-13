#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>

typedef std::string str;

void	write_file(str newStr, str filename)
{
	str	newFile;


	newFile = filename.append(".replace");
	std::ofstream file(newFile.c_str());
	if (!file.is_open())
	{
		std::cout << "Error creating the file!" << std::endl;
		exit(EXIT_FAILURE);
	}
	else
		file << newStr;
}

str replaceStrs(str file, str s1, str s2)
{
	int i = -1;

	while (++i < (int)file.length())
	{
		if (!file.compare(i, s1.length(), s1))
		{
			file.erase(i, s1.length());
			file.insert(i, s2);
		}
	}

	return (file);
}

str read_file(str filename)
{
	std::ifstream file(filename.c_str());
	str replace;
	str newStr;
	if (!file.is_open())
	{
		std::cout << "Error while opening file\n";
		exit(EXIT_FAILURE);
	}
	else
	{
		while(getline(file, replace))
			newStr.append(replace + "\n");
	}
	file.close();
	return(newStr);
}


int main(int ac, char **av)
{
	str newStr;

	if (ac != 4)
	{
		std::cout << "Invalid input.\nTry ./replace <Filename> <s1> <s2>\n";
		exit(EXIT_FAILURE);
	}
	newStr = read_file(av[1]);
	newStr = replaceStrs(newStr, av[2], av[3]);
	write_file(newStr, av[1]);
}