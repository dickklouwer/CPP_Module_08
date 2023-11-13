/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dickklouwer <tklouwer@student.codam.nl>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/02 09:13:19 by dickklouwer   #+#    #+#                 */
/*   Updated: 2023/11/07 08:45:51 by dickklouwer   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main() 
// {
// 	try {
// 		Span _arr(100000);

// 		for (int i = 0; i < 100001; i++) {
// 			_arr.addNumber(rand());
// 		}
// 		std::cout << _arr.longestSpan() << std::endl;
// 		std::cout << _arr.shortestSpan() << std::endl;
// 	}	
// 	catch (const std::length_error &e) {
// 		std::cerr << e.what() << std::endl;
// 	}
// }

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}