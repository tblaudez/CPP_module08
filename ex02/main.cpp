/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 11:53:17 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/06 12:01:55 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


#include <iostream>


int	main(void) {

	MutantStack<int>	mstack;
	MutantStack<int>	mstack2(mstack);

	mstack.push(10);
	mstack.push(15);
	mstack.push(20);

	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;

	std::cout << std::endl;

	for (MutantStack<int>::const_iterator it=mstack.begin(); it != mstack.end(); it++) {
		std::cout << *it << std::endl;
	}

	std::cout << std::endl;

	for (MutantStack<int>::const_reverse_iterator it=mstack.rbegin(); it != mstack.rend(); it++) {
		std::cout << *it << std::endl;
	}

	return 0;
}
