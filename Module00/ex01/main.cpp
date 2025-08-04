#include "PhoneBook.hpp"



int main()
{
    std::string input;
    PhoneBook phonebook;

    std::cout << "\033[32;1mEnter an option (ADD, SEARCH, EXIT)..." << "\033[0m" << std::endl;
    while (std::getline(std::cin, input))
    {
        if (input == "ADD")
            phonebook.add();
        else if (input == "SEARCH")
            phonebook.search();
        else if (input == "EXIT")
        {   
            std::cout << "\n\033[33;1mBye, bye!\n" << std::endl;
            break;
        }
        std::cout << "\033[32;1mEnter an option (ADD, SEARCH, EXIT)..." << "\033[0m" << std::endl;
	}
    return 0;
}

