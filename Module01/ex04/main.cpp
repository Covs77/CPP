/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:39:36 by cova              #+#    #+#             */
/*   Updated: 2025/08/06 19:21:47 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

std::string my_sed(std::string str, std::string s1, std::string s2)
{
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


/************************************************************************************/
/*                         SINTAXIS IF ELSE                                         */
/*                                                                                  */
/*std::string filename = (pos != std::string::npos) ? str.substr(pos + 1) : str;    */
/*                                                                                  */
/*                         EQUIVALENCIA                                             */
/* std::string filename;                                                            */
/* if ((pos != std::string::npos))  // npos= no existe posicion                     */
/*      filename = str.substr(pos+1);                                               */
/* else                                                                             */    
/*      filename = str;                                                             */                                 
/************************************************************************************/

std::string getFileName(std::string str)
{
    size_t pos = str.find_last_of("/\\");
    std::string filename = (pos != std::string::npos) ? str.substr(pos + 1) : str;   
    size_t dot = filename.find_last_of('.');
    if (dot != std::string::npos)
        filename = filename.substr(0, dot);
    return filename;
}

int printError(std::string msg)
{
    std::cerr << "\033[31;1mError: " << msg << "\033[0m" << std::endl;
    return 1;
}


int main (int argc, char** argv)
{
    if (argc != 4)
        return printError ("Invalid arguments. Please usage:<filename>, <s1>, <s2>" );
    
    std::ifstream file(argv[1]); // Open the file
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if(s1.empty() || s2.empty())
        return printError ("Not valid arguments");
    if (!file.is_open())
        return printError ("The file cannot be opened");
    
    std::string filename = getFileName(argv[1]);
    std::stringstream buffer;
    buffer << file.rdbuf(); 
    std::string original = buffer.str(); 
    file.close();
    std::string copia(original);
    copia = my_sed(copia, argv[2], argv[3]);
    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile.is_open())
        return (printError("Destination file could not be opened\n"));
    outFile << copia;
    outFile.close();
    return 0;   
}
