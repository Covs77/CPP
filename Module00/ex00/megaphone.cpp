#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        for (std::string::size_type j = 0; j < arg.length(); ++j) {
            std::cout << (char)std::toupper(arg[j]);
        }
        if (i < argc - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}