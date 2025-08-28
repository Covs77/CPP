/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 12:15:23 by cova              #+#    #+#             */
/*   Updated: 2025/08/25 12:15:27 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string n, std::string ds)
	: _firstName(fn), _lastName(ln), _nickName(nn), _phoneNumber(n), _darkSecret(ds) {}

std::string Contact::getFirstName() const {
	return _firstName; }

std::string Contact::getLastName() const {
	return _lastName; }

std::string Contact::getNickname() const {
	return _nickName; }

std::string Contact::getNumber() const { 
	return _phoneNumber; }

std::string Contact::getDarkestSecret() const {
	return _darkSecret; }