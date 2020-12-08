/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 11:53:17 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/12/08 11:49:19 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


#include <iostream> // cout


int	main(void) {

	MutantStack<int>	mstackDummy;

	for (int i=0; i < 15; i++) {
		mstackDummy.push(i * 5);
	}

	MutantStack<int>	mstack(mstackDummy);

	std::cout << "Stack Top: " << mstack.top() << std::endl;
	std::cout << "Stack Size: " << mstack.size() << std::endl << std::endl;

	std::cout << "From start to end :" << std::endl;
	for (MutantStack<int>::const_iterator it=mstack.begin(); it != mstack.end(); it++) {
		std::cout << *it << std::endl;
	}

	std::cout << std::endl << "From end to start: " << std::endl;
	for (MutantStack<int>::const_reverse_iterator it=mstack.rbegin(); it != mstack.rend(); it++) {
		std::cout << *it << std::endl;
	}

	return 0;
}
