/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dickklouwer <tklouwer@student.codam.nl>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/02 09:03:55 by dickklouwer   #+#    #+#                 */
/*   Updated: 2023/11/13 08:22:47 by dickklouwer   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <climits>

class Span {
	private:
		unsigned int _N;
		std::vector <int> _arr;

	public:
		Span();
		Span(unsigned int _N);
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);

		void			addNumber(unsigned int _a);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		void			addRange(int begin, int end);
};

#endif