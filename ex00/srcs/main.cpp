/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dickklouwer <tklouwer@student.codam.nl>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/02 08:03:57 by dickklouwer   #+#    #+#                 */
/*   Updated: 2023/11/02 09:01:51 by dickklouwer   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <iostream>
#include "easyfind.hpp" // This is where your easyfind template is defined

int main()
{
	std::vector<int> numbers = {1, 2, 3, 4, 5};

	/* Find middle element. */
	try
	{
		int index = easyfind(numbers, 3);
		std::cout << "Found 3 at index: " << index << std::endl;
	}
	catch (const NotFoundException &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	/* Trying to find number 6, does not exist so should throw an exception. */
	try
	{
		easyfind(numbers, 6);
		std::cerr << "Error: Should not find 6!" << std::endl;
	}
	catch (const NotFoundException &e)
	{
		std::cout << e.what() << std::endl;
	}

	/* Find first element. */
	try
	{
		int index = easyfind(numbers, 1);
		std::cout << "Found 1 at index: " << index << std::endl;
	}
	catch (const NotFoundException &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	/* Find last element. */
	try
	{
		int index = easyfind(numbers, 5);
		std::cout << "Found 5 at index: " << index << std::endl;
	}
	catch (const NotFoundException &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}