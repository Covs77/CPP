/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:45:46 by cleguina          #+#    #+#             */
/*   Updated: 2025/07/22 20:01:38 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <stdlib.h>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int _count;
		int _oldIndex;
		void truncateStrAndPrint(const std::string str);
		void displayContactList();
		void displayContact(int index);
		bool onlynumbers(const std::string& str);
	
	public:
		PhoneBook(void);
		void add(void);
		void search(void);
		void printError(const std:: string msg);
};

#endif