/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/06 11:20:49 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/12/08 11:42:43 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <deque> // duh..
#include <stack> // duh..


template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {

public:

	MutantStack() {}

	MutantStack(MutantStack const& src) : std::stack<T, Container>(src) {}

	MutantStack& operator=(MutantStack const& rhs) {

		if (this != &rhs) {
			std::stack<T, Container>::operator=(rhs);
		}
		return *this;
	}

	~MutantStack() {}

	typedef typename std::stack<T, Container>::container_type	container_type;
	typedef typename container_type::iterator					iterator;
	typedef typename container_type::const_iterator				const_iterator;
	typedef typename container_type::reverse_iterator			reverse_iterator;
	typedef typename container_type::const_reverse_iterator		const_reverse_iterator;

	iterator			begin() {
		return this->c.begin();
	}

	reverse_iterator	rbegin() {
		return this->c.rbegin();
	}

	iterator			end() {
		return this->c.end();
	}

	reverse_iterator	rend() {
		return this->c.rend();
	}

};
