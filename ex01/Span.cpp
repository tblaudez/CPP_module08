/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 10:17:59 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/12/08 16:48:08 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


#include <stdexcept> // runtime_error
#include <limits>


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

	std::vector<int> sorted = std::vector<int>(*this);
	std::sort(sorted.begin(), sorted.end());

	long	shortestSpan = std::numeric_limits<long>::max();
	for (std::vector<int>::iterator it = sorted.begin(); it != sorted.end(); it++) {
		for (std::vector<int>::iterator it2 = sorted.begin(); it2 != sorted.end(); it2++) {
			if (it != it2) {
				if (abs(*it - *it2) < shortestSpan) {
					shortestSpan = abs(*it - *it2);
				}
			}
		}
	}

	return shortestSpan;
}

unsigned int		Span::longestSpan() const {

	if (this->empty() || this->size() == 1) {
		throw std::runtime_error("Span is empty or has only one number");
	}

	std::vector<int> sorted = std::vector<int>(*this);
	std::sort(sorted.begin(), sorted.end());

	return sorted.back() - sorted.front();
}
