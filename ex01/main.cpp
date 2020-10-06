/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 10:54:53 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/06 11:15:56 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int	main(void) {

	std::srand(std::time(0));

	Span				span(15000);
	std::vector<int>	v(15000);


	// std::generate(v.begin(), v.end(), std::rand);
	// span.addNumer(v.begin(), v.end());

	// span.addNumer(5);
	// span.addNumer(2);
	// span.addNumer(7);
	// span.addNumer(35);
	// span.addNumer(22);
	// span.addNumer(54);


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
