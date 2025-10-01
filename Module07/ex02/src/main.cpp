/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cova <cova@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 18:31:10 by cova              #+#    #+#             */
/*   Updated: 2025/10/01 19:09:35 by cova             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 5
#define VAL_EXCEPT 10


int main() {
     std::cout << "\033[033;1m-----Array<T> Basic Tests-----\033[0m" << std::endl;

     // Test 1: Empty array
     std::cout << "\033[033;1m==Test 1: Empty array==\033[0m" << std::endl;
     Array<int> empty;
     std::cout << "Size: " << empty.size() << std::endl;

     std::cout << "\n\033[033;1m==Test 2: Array with size 3 && []==\033[0m" << std::endl;
     Array<int> arr(3);
     for (unsigned int i = 0; i < arr.size(); i++) {
         arr[i] = (i + 1) * 5;
         std::cout << " arr[" << i << "] = " << arr[i] << std::endl;
     }
    
     std::cout << "\n\033[033;1mFunction size() Test\nSize: " << arr.size() << "\033[0m"<< std::endl;

     std::cout << "\n\033[033;1m==Test 3: Copy constructor &&  []==\033[0m" << std::endl;
     Array<int> copy(arr);
     size_t i = 0;
     while (i < arr.size())
     {
        std::cout << "  copy["<< i<< "] = " << copy[i] << std::endl;
        i++;
     }
     
     std::cout << "\n\033[033;1m==Test 4: Assignament Operator test==\033[0m" << std::endl;
     Array<int> copy2 = arr;
     
     size_t j = 0;
     while (j < arr.size())
     {
        std::cout << "  copy2["<< j<< "] = " << copy2[j] << std::endl;
        j++;
     }
     
     std::cout << "\n\033[033;1m==Test 5: Out-of-bounds access==\033[0m" << std::endl;
     try {
         std::cout << "Accessing arr[5]..." << std::endl;
         std::cout << arr[5] << std::endl;
     } catch (const std::exception& e) {
         std::cout << "\033[031;1mException Catched!!! \n\033[0m" << e.what() << std::endl;
     }

     std::cout << "\n\033[035;1m=== Basic tests finished ===\033[0m" << std::endl;
     return 0;
}

/* int main()
{
	std::cout << "\033[1;33m==Test 0: array vacio==\033[0m" << std::endl;
	Array<int> empty;
	std::cout << "Empty array size: " << empty.size() << std::endl;
	std::cout << std::endl;
	
	std::cout << "\033[1;33m==Test 1: array con N elementos==\033[0m" << std::endl;
	Array<int> arrayInt(MAX_VAL);
	std::cout << "Array size: " << arrayInt.size() << std::endl;
	std::cout << std::endl;

		std::cout << "\033[1;33m==Test 2: operador de asignacion y constructor de copia==\033[0m" << std::endl;
	Array<int> copy(arrayInt);
	std::cout << "Copy size: " << copy.size() << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1;33m==Test 3: operador [] y excepcion out of range==\033[0m" << std::endl;
	try
	{
		for (size_t i = 0; i < MAX_VAL; i++)
		{
			arrayInt[i] = i;
			std::cout << "arrayInt[" << i << "] = " << arrayInt[i] << std::endl;
		}
        arrayInt[MAX_VAL] = VAL_EXCEPT;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	
	return 0;
} */