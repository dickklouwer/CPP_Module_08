/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dickklouwer <tklouwer@student.codam.nl>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/02 09:08:53 by dickklouwer   #+#    #+#                 */
/*   Updated: 2023/11/13 08:23:00 by dickklouwer   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {
}

Span::Span(unsigned int size) : _N(size) {	
}

Span::~Span() {
}

Span::Span(const Span& other) {
	*this = other;
}

Span& Span::operator=(const Span &other)
{
	if (this != &other)
		this->_N = other._N;
	return *this;
}

void	Span::addNumber(unsigned int _a)
{
	if (_arr.size() <= this->_N)
		_arr.push_back(_a);
	else
		throw std::length_error("Span is Full ... ");	
}

unsigned int	Span::shortestSpan() 
{
	if (_arr.size() < 2)
		throw std::length_error("Not enough elements to measure the Span ...");
	
	std::vector<int> sortedArr = _arr;
	std::sort(sortedArr.begin(), sortedArr.end());
	
	unsigned int minSpan = UINT_MAX;
	for (size_t i = 0; i < sortedArr.size() - 1; i++)
	{
		unsigned int span = sortedArr[i + 1] - sortedArr[i];
		if (span < minSpan)
			minSpan = span;
	}
	return minSpan;
}

unsigned int	Span::longestSpan() 
{
	if (_arr.size() < 2)
		throw std::length_error("Not enough elements to measure the Span ...");
	
	auto result = std::minmax_element(_arr.begin(), _arr.end());

	unsigned int maxSpan = static_cast<unsigned int>(*result.second - *result.first);
	
	return maxSpan;
}

void	Span::addRange(int begin, int end)
{
	if (end < begin) {
		throw std::invalid_argument("End must be greater then the begin ...");
	}
	if (_arr.size() + (end - begin + 1) > _N) {
		throw std::length_error("Given range exceeds Size of the container ...");
	}
	for (int i = begin; i < end; i++)
		_arr.push_back(i);
}