/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 10:15:21 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/06 11:21:22 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <vector>
#include <iterator>


class Span {

public:

	Span(unsigned int maxSize=0);
	Span(Span const& src);
	Span& operator=(Span const& rhs);
	~Span();

	void	addNumer(int number);
	template <typename T>
	void	addNumer(T first, T last) {
		while (first != last) {
			this->addNumer(*first++);
		}
	}
	int		shortestSpan() const;
	int		longestSpan() const;

private:

	std::vector<int>	_array;
	std::vector<int>	_sorted_array;

};
