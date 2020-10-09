/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 10:15:21 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 17:39:56 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <vector> // duh..

class Span : public std::vector<int> {

public:

	Span(unsigned int maxSize=0);
	Span(Span const& src);
	Span& operator=(Span const& rhs);
	~Span();

	void	addNumer(int number);

	void	addNumer(std::vector<int>::iterator first, std::vector<int>::iterator last) {
		while (first != last) {
			this->addNumer(*first++);
		}
	}

	int		shortestSpan() const;
	int		longestSpan() const;

};
