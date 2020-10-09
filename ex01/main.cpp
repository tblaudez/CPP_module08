/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 10:54:53 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 17:32:33 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <cstdlib> // srand, rand
#include <ctime> // time
#include <iostream> // cout, cerr

int myRand() {

	return rand() % 5000;
}


int	main(void) {

	srand(time(0));

	Span span(2000);

	span.addNumer(24);
	span.addNumer(47);
	span.addNumer(79);
	span.addNumer(35);
	span.addNumer(22);
	span.addNumer(54);

	std::vector<int> v(1000);
	std::generate(v.begin(), v.end(), myRand);

	span.addNumer(v.begin(), v.end());


	std::cout << span.size() << " / " << span.capacity() << std::endl;

	try
	{
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	catch(std::runtime_error& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}


	return 0;
}
