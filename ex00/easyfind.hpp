/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 14:19:37 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/05 14:53:52 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <algorithm>
#include <exception>


template <typename T>
typename T::iterator	easyfind(T container, int x) {

	typename T::iterator	it = std::find(container.begin(), container.end(), x);
	if (it == container.end()) {
		throw std::exception();
	}
	return it;
}
