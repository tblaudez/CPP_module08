/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 10:17:59 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/06 11:21:19 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


#include <stdexcept>


Span::Span(unsigned int maxSize) {

	this->_array.reserve(maxSize);
}


Span::Span(Span const& src) {

	*this = src;
}


Span&	Span::operator=(Span const& rhs) {

	if (this != &rhs) {
		this->_array = rhs._array;
	}

	return *this;
}


Span::~Span() {

}


void	Span::addNumer(int number) {

	if (this->_array.size() == this->_array.capacity()) {
		throw std::runtime_error("Span max size exceeded");
	}

	this->_array.push_back(number);

	this->_sorted_array.push_back(number);
	std::sort(this->_sorted_array.begin(), this->_sorted_array.end());
}

int		Span::shortestSpan() const {

	if (this->_array.empty() || this->_array.size() == 1) {
		throw std::runtime_error("Span is empty or has only one number");
	}

	return this->_sorted_array[1] - this->_sorted_array[0];
}


int		Span::longestSpan() const {

	if (this->_array.empty() || this->_array.size() == 1) {
		throw std::runtime_error("Span is empty or has only one number");
	}

	return this->_sorted_array.back() - this->_sorted_array.front();
}
