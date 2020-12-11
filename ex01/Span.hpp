/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 10:15:21 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/12/11 13:19:17 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <vector> // duh..

class Span : public std::vector<int> {

public:

	Span(unsigned int maxSize=0);
	Span(Span const& src);
	Span& operator=(Span const& rhs);
	virtual ~Span();

	void			addNumer(int number);
	void			addNumer(std::vector<int>::iterator first, std::vector<int>::iterator last);

	unsigned int	shortestSpan() const;
	unsigned int	longestSpan() const;

};
