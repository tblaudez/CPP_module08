/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 14:28:15 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/05 14:55:46 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <list>
#include <vector>
#include <deque>
#include <iostream>


int	main(void) {

	{
		// Replace vector by "list" or "deque", it works the same
		std::vector<int>			intList;
		std::vector<int>::iterator	it;
		for (int i=0; i<10; i++) {
			intList.push_back(5 * i);
		}
		try
		{
			it = easyfind(intList, 25);
			std::cout << *it << std::endl;
			it = easyfind(intList, 5);
			std::cout << *it << std::endl;
			it = easyfind(intList, 7);
			std::cout << *it << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}


	return 0;
}
