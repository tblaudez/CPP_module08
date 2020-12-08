/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 10:54:53 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/12/08 17:03:36 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <cstdlib> // arc4random
#include <iostream> // cout, cerr

int	main(void) {

	Span				span(10000);

	// Error, No value in Span
	try
	{
		span.shortestSpan();
	}
	catch(std::runtime_error& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	// Error, Fill Span with random values and overflow by 1
	try {
		std::vector<int>	v(10001);
		std::generate(v.begin(), v.end(), arc4random);
		span.addNumer(v.begin(), v.end());
	}
	catch(std::runtime_error& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}


	std::cout << "Span Size : " << span.size() << "/" << span.capacity() << std::endl;

	try
	{
		std::cout << "Minimum span: " << span.shortestSpan() << std::endl;
		std::cout << "Maximum span: " << span.longestSpan() << std::endl;
	}
	catch(std::runtime_error& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}


	return 0;
}
