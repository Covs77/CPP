#include <iostream>
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>


int main(int argc, char **argv)
{
	int i;
	unsigned int j;
	
	if (argc < 2) 
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	i = 1;
	while (i < argc) 
	{
		std::string str = argv[i];
		j = 0;
		while (j < str.length()) {
			std::cout << (char)std::toupper(str[j]);
			++j;
		}
		if (i < argc - 1)
			std::cout << " ";

		++i;
	}
	std::cout << std::endl;
	return 0;
}