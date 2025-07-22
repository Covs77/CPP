/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:40:27 by cleguina          #+#    #+#             */
/*   Updated: 2025/07/22 10:27:25 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkSecret;
	public:
		Contact(void);
		Contact(std::string fn, std::string ln, std::string nn, std::string n, std::string ds);
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;
		std::string getNumber() const;
		std::string getDarkestSecret() const;
};
#endif
