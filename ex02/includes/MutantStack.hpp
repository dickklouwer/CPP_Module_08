/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dickklouwer <tklouwer@student.codam.nl>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 08:33:37 by dickklouwer   #+#    #+#                 */
/*   Updated: 2023/11/13 09:58:56 by dickklouwer   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <iterator>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
	private:

	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		using std::stack<T>::stack; // Inherit constructors
		MutantStack() : std::stack<T>() { 
		}

		MutantStack(const MutantStack<T> &other) : std::stack<T>(other) {
		}

		MutantStack<T> &operator=(const MutantStack<T> &other)
		{
			std::stack<T>::operator=(other);
			return *this;
		}

		iterator begin() {
			return this->c.begin();
		}

		iterator end() {
			return this->c.end();
		}

		iterator begin() const {
			return this->c.begin();
		}

		iterator end() const {
			return this->c.end();
		}

		reverse_iterator rbegin() {
			return this->c.rbegin();
		}

		reverse_iterator rbegin() const {
			return this->c.rbegin();
		}

		reverse_iterator rend() {
			return this->c.rend();
		}

		reverse_iterator rend() const {
			return this->c.rend();
		}
};

#endif