/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/05 14:19:37 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/09 17:32:48 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <algorithm> // find


template <typename T>
typename T::iterator	easyfind(T& container, int x) {

	return std::find(container.begin(), container.end(), x);
}
