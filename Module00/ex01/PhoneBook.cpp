/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:46:07 by cleguina          #+#    #+#             */
/*   Updated: 2025/07/22 13:43:31 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <cstdio>



PhoneBook::PhoneBook(void)
{
	_count = 0;
	_oldIndex = 0;
}

void PhoneBook::truncateStrAndPrint(const std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) + ".";
	else
		std::cout << str;
}

void PhoneBook::displayContactList()
{
	int index;
	
	std::cout << "Enter First Name: ";
	std::cout << std::setw(10) << "\nIndex" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname" << std::endl;
	
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
	
	std::cout << "Choose an index to display contact details: ";
    std::cin >> index;
	displayContact(index);
}

void PhoneBook::displayContact(int index)
{
	printf("Numero total de contacts: %d\n", _count);
	printf("Contacto solicitado: %d\n", index);
	if (index <= 0 || index > _count)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	index--;
	std::cout << "First Name: " << _contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << _contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << _contacts[index].getNumber() << std::endl;
	std::cout << "Darkest Secret: " << _contacts[index].getDarkestSecret() << std::endl;
	
}

void PhoneBook::add(void)
{
	Contact contact;
	printf("Contact count: %d\n", _count);
	
	std::string fn, ln, nn, n, ds;
	std::cout << "Enter First Name: ";
	contact.getFirstName();
	std::cout << "Enter Last Name: ";
	contact.getLastName();
	std::cout << "Enter Nickname: ";
	contact.getNickname();
	std::cout << "Enter Phone Number: ";
	contact.getNumber();
	std::cout << "Enter Darkest Secret: ";
	contact.getDarkestSecret();
	
	if (_count <= 2)
	{	
		_contacts[_count] = Contact(fn, ln, nn, n, ds);
		_count++;
	}
	else
	{
		_contacts[_oldIndex] = Contact();
		//add();
	}
	if (_oldIndex < 2)
		_oldIndex++;
	else
		_oldIndex = 0;
}

void PhoneBook::search(void)
{
	truncateStrAndPrint("Contact List:\n");
	displayContactList();
}