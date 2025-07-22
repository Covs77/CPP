/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 10:45:46 by cleguina          #+#    #+#             */
/*   Updated: 2025/07/22 12:41:56 by cleguina         ###   ########.fr       */
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
		Contact	_contacts[2];
		int _count;
		int _oldIndex;
		void truncateStrAndPrint(const std::string str);
		void displayContactList();
		void displayContact(int index);
	
	public:
		PhoneBook(void);
		void add(void);
		void search(void);
};

#endif