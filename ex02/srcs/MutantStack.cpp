/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dickklouwer <tklouwer@student.codam.nl>      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 08:33:35 by dickklouwer   #+#    #+#                 */
/*   Updated: 2023/11/13 10:23:26 by dickklouwer   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	// Compare with std::list
	std::list<int> list;
	// Add the same elements to the list
	list.push_back(5);
	list.push_back(17);
	std::cout << "\nComparison to list:\n" << list.back() << std::endl;
	list.pop_back();										  
	std::cout << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it)
	{
		std::cout  << *it << std::endl;
	}

	return 0;
}
