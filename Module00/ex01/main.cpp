#include "PhoneBook.hpp"



int main()
{
    std::string input;
    PhoneBook phonebook;

    while (std::cout << "Enter a command (ADD, SEARCH, EXIT)..." << std::endl,
           std::getline(std::cin, input))
    {
        if (input == "ADD")
            phonebook.add();
        else if (input == "SEARCH")
            phonebook.search();
        else if (input == "EXIT")
        {
            std::cout << "Bye, bye!" << std::endl;
            break;
        }
    }

    return 0;
}

/* int main()
{
	std::string input = "";
	PhoneBook phonebook;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT)..." << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
			break ;
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
		{
			std::cout << "\nBye, bye!" << std::endl;
			return (0);
		}
	}
	
} */