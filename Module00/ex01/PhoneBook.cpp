/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:46:07 by cleguina          #+#    #+#             */
/*   Updated: 2025/07/22 20:06:49 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cstdio>


void PhoneBook::printError(const std::string msg)
{
	std::cout << "\033[31;1m" << msg << "\n\033[0m"; 
}

bool PhoneBook::onlynumbers(const std::string& str)
{
    bool soloNumeros = true;
	for (std::string::size_type i = 0; i < str.length(); ++i) 
	{
		if (!std::isdigit(static_cast<unsigned char>(str[i]))) 
		{
			soloNumeros = false;
			break;
		}
	}
	return soloNumeros;
}
		
PhoneBook::PhoneBook(void)
{
	_count = 0;
	_oldIndex = 0;
}

void PhoneBook::truncateStrAndPrint(const std::string str)
{
	if (str.length() > 9)
		std::cout << std::setw(10) << str.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << str;
}

void PhoneBook::displayContactList()
{
	std::cout << "\033[33;1m\n" 
			<< std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname" 
			<< std::endl;
	
	for (int i = 0; i < _count; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		truncateStrAndPrint(_contacts[i].getFirstName());
		std::cout << "|";
		truncateStrAndPrint(_contacts[i].getLastName());
		std::cout << "|";
		truncateStrAndPrint(_contacts[i].getNickname());
		std::cout << std::endl;
	}
	
}

void PhoneBook::displayContact(int index)
{
	index--;
	std::cout << std::setw(10) << "\033[36;1mFirst Name: \033[37;1m";
	std::cout << _contacts[index].getFirstName();
	std::cout << std::endl;
	std::cout << std::setw(10) << "\033[36;1mLast Name: \033[37;1m";
	std::cout << _contacts[index].getLastName(); 
	std::cout << std::endl;;
	std::cout << std::setw(10) << "\033[36;1mNickname: \033[37;1m";
	std::cout << _contacts[index].getNickname();
	std::cout << std::endl;
	std::cout << std::setw(10) << "\033[36;1mPhone Number: \033[37;1m";
	std::cout << _contacts[index].getNumber();
	std::cout << std::endl;
	std::cout << std::setw(10) << "\033[36;1mDarkest Secret: \033[37;1m";
	std::cout << _contacts[index].getDarkestSecret();
	std::cout << "\n-------------------------------\033[0m\n";
	std::cout << std::endl;
}

void PhoneBook::add(void)
{
	std::string fn, ln, nn, num, ds;
	
	while (fn.empty()
	)
	{	std::cout << "\033[32;1mEnter First Name: \033[0m", std::getline(std::cin, fn);
		if (std::cin.eof())
			return;
		if (fn.empty())
			printError("Field can't be empty. Try again.");
	}
	
	while (ln.empty())
	{
		std::cout << "\033[32;1mEnter Last Name: \033[0m", std::getline(std::cin, ln);
		if (std::cin.eof())
			return;
		if (ln.empty())
			printError("Field can't be empty. Try again.");
	}
	
	while (nn.empty())
	{
		std::cout << "\033[32;1mEnter Nickname: \033[0m", std::getline(std::cin, nn);
		if (std::cin.eof())
			return;
		if (nn.empty())
			printError("Field can't be empty. Try again.");
	}
	
	while (num.empty() || !onlynumbers(num) || num.length() != 9)
	{
		std::cout << "\033[32;1mEnter Phone Number: \033[0m", std::getline(std::cin, num);
		if (std::cin.eof())
			return;
		if (num.empty())
			printError("Field can't be empty. Try again");
		else if (!onlynumbers(num) || num.length() != 9)
			printError("Enter a correct phone number. Try again.");
	}
	
	while (ds.empty())
	{
		std::cout << "\033[32;1mEnter Darkest Secret: \033[0m", std::getline(std::cin, ds);
		if (std::cin.eof())
			return;
		if (ds.empty())
			printError("Field can't be empty. Try again.");
	}

	if (_count < 8)
	{
		_contacts[_count] = Contact(fn, ln, nn, num, ds);
		_count++;
	}
	else
	{
		_contacts[_oldIndex] = Contact(fn, ln, nn, num, ds);
		_oldIndex++;
		if (_oldIndex == 8)
			_oldIndex = 0;
	}
	std::cout << "\n\033[33;1mContact added successfully!\033[0m\n" << std::endl;	
}

void PhoneBook::search(void)
{
	if (_count == 0)
	{
		printError("The PhoneBook is empty!!");
		return;
	}
	displayContactList();
	std::string index = "a";
	int idx = 0;
	while (!onlynumbers(index))
	{
    	std::cout << "\033[36;1m\nChoose an index to display contact details: ";
    	std::getline(std::cin, index);
    	if (std::cin.eof()) // Control EOF si quieres
        	return;
	    if (!onlynumbers(index)) {
    	    printError("Please enter a number.");
   		 }
		idx = std::atoi(index.c_str());
		if (idx <= 0 || idx > _count)
		{
			printError("Invalid index. Try again...");
			idx = 0;
			index = "a";
		}
	}
	displayContact(idx);
}