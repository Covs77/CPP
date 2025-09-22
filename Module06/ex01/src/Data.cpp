 #include "Data.hpp"
 #include <string>
 #include <iostream>

 Data::Data(){
    this->_name = "default";
 };

Data::~Data(){};

Data::Data(const Data &copy){
    *this = copy;
};

Data &Data::operator=(const Data &other)
{
    if (this != &other)
        this->_name = other._name;
    return *this;
};

std::string Data::getName() const
{
    return (this->_name);
};

void Data::setName(std::string name)
{
    this->_name = name;
};