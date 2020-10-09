/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 14:28:15 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 17:33:05 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector> // duh..
#include <iostream> // cout, cerr


int	main(void) {

	// Replace vector by "list" or "deque", it works the same
	std::vector<int>			intList;
	std::vector<int>::iterator	it;

	for (int i=0; i<10; i++) {
		intList.push_back(5 * i);
	}

	it = easyfind(intList, 25);
	if (it != intList.end()) {
		std::cout << *it << std::endl;
	} else {
		std::cerr << "Not found" << std::endl;
	}

	it = easyfind(intList, 10);
	if (it != intList.end()) {
		std::cout << *it << std::endl;
	} else {
		std::cerr << "Not found" << std::endl;
	}

	it = easyfind(intList, 7);
	if (it != intList.end()) {
		std::cout << *it << std::endl;
	} else {
		std::cerr << "Not found" << std::endl;
	}


	return 0;
}
