
#include "Contact.hpp"
#include <iostream>


Contact::Contact() {}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string n, std::string ds) : _firstName(fn), _lastName(ln), _nickName(nn), _phoneNumber(n), _darkSecret(ds) {}

std::string Contact::getFirstName() const 
{
	std::cout << "First Name: " << _firstName << std::endl;
	return _firstName;
}

std::string Contact::getLastName() const 
{
	std::cout << "Last Name: " << _lastName << std::endl;
	return _lastName;
}

std::string Contact::getNickname() const 
{
	std::cout << "Nickname: " << _nickName << std::endl;
	return _nickName;
}

std::string Contact::getNumber() const 
{
	std::cout << "Phone Number: " << _phoneNumber << std::endl;
	return _phoneNumber;
}

std::string Contact::getDarkestSecret() const 
{
	std::cout << "Darkest Secret: " << _darkSecret << std::endl;
	return _darkSecret;
}