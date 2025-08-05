/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleguina <cleguina@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:39:36 by cova              #+#    #+#             */
/*   Updated: 2025/08/05 18:13:48 by cleguina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string my_sed(std::string str, std::string s1, std::string s2)
{
    if (s1.empty() || s2.empty())
    {
        std::cerr << "\033[31;1mError: Not valid arguments\033[0m" << std::endl;
        return str;
    }
    std::string result;
    size_t i = 0;
    while (i < str.size())
    {
        if (str.compare(i, s1.size(), s1) == 0)
        {
            result += s2;
            i += s1.size();
        }
        else
        {
            result += str[i];
            i++;
        }
    }
    return result;
}

std::string getFileName(std::string path)
{
    size_t pos = path.find_last_of("/\\");
    std::string filename = (pos != std::string::npos) ? path.substr(pos + 1) : path;
    size_t dot = filename.find_last_of('.');
    if (dot != std::string::npos)
        filename = filename.substr(0, dot);
    return filename;
}


int main (int argc, char** argv)
{
    if (argc < 4)
    {
        std::cerr << "\033[31;1mError: At least 3 arguments required\n(Example: File, str1, str2)\033[0m" << std::endl;
        return 1;
    }
       std::ifstream file(argv[1]); 
    if (!file.is_open())
    {
        std::cerr << "Error: The file cannot be opened." << argv[1] << std::endl;
        return 1;
    }
    std::string filename = getFileName(argv[1]);
    std::stringstream buffer;
    buffer << file.rdbuf(); 
    std::string original = buffer.str(); 
    file.close();
    std::string copia(original);
    copia = my_sed(copia, argv[2], argv[3]);
    std::ofstream outFile((filename + ".replace").c_str());
    if (outFile.is_open())
    {
        outFile << copia;
        outFile.close();
    }
    else
       std::cerr << "Destination file could not be opened\n";
    return 0;   
}
