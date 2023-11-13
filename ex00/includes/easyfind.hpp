/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dickklouwer <tklouwer@student.codam.nl>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/02 08:04:15 by dickklouwer   #+#    #+#                 */
/*   Updated: 2023/11/02 08:59:30 by dickklouwer   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <exception>

class NotFoundException : public std::exception {
	public:
		const char* what() const throw() {
			return "Element not found.";
		}
};

template <typename T>

int	easyfind(T& container, int toFind)
{
	auto it = std::find(container.begin(), container.end(), toFind);
	if (it == container.end())
		throw NotFoundException();
	return std::distance(container.begin(), it);
}

#endif