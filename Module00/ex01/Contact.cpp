
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