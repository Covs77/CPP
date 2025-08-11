/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:32:52 by cova              #+#    #+#             */
/*   Updated: 2025/08/11 18:53:33 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


/******************************************************************************/
/*       Tolower Function, change every char to a lower one				      */
/******************************************************************************/

std::string parseLevel (std::string level)
{
	int i = 0;
	while (level[i] != '\0')
	{
		level[i] = tolower(level[i]);
		i++;
	}
	return (level);
}

/******************************************************************************/
/*       						Main Program							      */
/******************************************************************************/


int main(int argc, char **argv)
{

	if (argc != 2)
	{
		printError ("Incorrect number of arguments...\n");
		return (1);
	}
	
	Harl harl;
	std::string level = argv[1];
	level = parseLevel(level);
	harl.complain(level);
	return (0);
}