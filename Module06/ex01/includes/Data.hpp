#ifndef DATA_HPP
#define DATA_HPP
#include <string>

class Data
{
    private :
        std::string _name;
    public:
        Data();
        ~Data();
        Data(const Data &copy);
        Data &operator=(const Data &other);
        std::string getName() const;
        void setName(std::string name);
};
#endif