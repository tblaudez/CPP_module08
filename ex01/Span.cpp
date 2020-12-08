/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 10:17:59 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/12/08 11:50:53 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


#include <stdexcept> // runtime_error


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

	return sorted[1] - sorted[0];
}

unsigned int		Span::longestSpan() const {

	if (this->empty() || this->size() == 1) {
		throw std::runtime_error("Span is empty or has only one number");
	}

	std::vector<int> sorted = std::vector<int>(*this);
	std::sort(sorted.begin(), sorted.end());

	return sorted.back() - sorted.front();
}
