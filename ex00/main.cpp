/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 14:28:15 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/12/08 10:30:52 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector> // duh..
#include <list> // duh..
#include <iostream> // cout, cerr


int	main(void) {

	std::vector<int>			intList;
	std::vector<int>::iterator	it;

	// std::list<int>				intList;
	// std::list<int>::iterator	it;


	for (int i=0; i<10; i++) {
		intList.push_back(i * 5);
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
