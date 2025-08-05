/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 14:39:36 by cova              #+#    #+#             */
/*   Updated: 2025/08/05 15:12:35 by cova             ###   ########.fr       */
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
        std::cerr << "\033[31;1mArgumentos no válidos\033[0m" << std::endl;
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
   

int main (int argc, char** argv)
{
    if (argc < 4)
    {
        std::cerr << "\033[31;1mError: Se requieren al menos tres argumentos (File, str1, str2).\033[0m" << std::endl;
        return 1;
    }
       std::ifstream file(argv[1]); 
    if (!file.is_open())
    {
        std::cerr << "Error: No se pudo abrir el archivo " << argv[1] << std::endl;
        return 1;
    }
    std::stringstream buffer;
    buffer << file.rdbuf(); // Lee todo el contenido del fichero
    std::string original = buffer.str(); // Guarda en un string
    file.close();
    std::string copia(original);
    copia = my_sed(copia, argv[2], argv[3]);
     std::ofstream outFile("archivo_modificado.txt");
    if (outFile.is_open())
    {
        outFile << copia;
        outFile.close();
    }
    else
    {
        std::cerr << "No se pudo abrir el archivo para escribir\n";
    }
}
