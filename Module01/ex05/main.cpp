/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:32:52 by cova              #+#    #+#             */
/*   Updated: 2025/08/11 14:03:52 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		std::cout << RED << "Usage: " << argv[0] << " [LEVEL]" << std::endl;
		return (1);
	}
	std::string level = argv[1];
	Harl *harl = new Harl();
	harl->complain(level);
	delete(harl);
	return (0);
}