/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 10:17:59 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/12/11 13:21:56 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


#include <stdexcept> // runtime_error
#include <limits> // numeric_limits
#include <algorithm> // min
#include <cstdlib> // abs


Span::Span(unsigned int maxSize) : std::vector<int>() {

	this->reserve(maxSize);
}


Span::Span(Span const& src) : std::vector<int>(src) {

	*this = src;
}


Span&	Span::operator=(Span const& rhs) {

	if (this != &rhs) {
		std::vector<int>::operator=(rhs);
	}

	return *this;
}


Span::~Span() {

}


void	Span::addNumer(int number) {

	if (this->size() == this->capacity()) {
		throw std::runtime_error("Span max size exceeded");
	}

	this->push_back(number);
}


void	Span::addNumer(std::vector<int>::iterator first, std::vector<int>::iterator last) {
	while (first != last) {
		this->addNumer(*first++);
	}
}


unsigned int		Span::shortestSpan() const {

	if (this->empty() || this->size() == 1) {
		throw std::runtime_error("Span is empty or has only one number");
	}

	std::vector<int>	copy = std::vector<int>(*this);
	unsigned int		span, shortestSpan = std::numeric_limits<unsigned int>::max();

	for (std::vector<int>::iterator it = copy.begin(); it != copy.end(); it++) {
		for (std::vector<int>::iterator it2 = copy.begin(); it2 != copy.end(); it2++) {
			if (it != it2) {
				span = abs(*it - *it2);
				shortestSpan = std::min(span, shortestSpan);
			}
		}
	}

	return shortestSpan;
}

unsigned int		Span::longestSpan() const {

	if (this->empty() || this->size() == 1) {
		throw std::runtime_error("Span is empty or has only one number");
	}

	return std::max_element(this->begin(), this->end()) - std::min_element(this->begin(), this->end());
}
