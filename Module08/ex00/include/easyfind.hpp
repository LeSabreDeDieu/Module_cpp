/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:02:27 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/21 17:46:52 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

#include <algorithm>
#include <exception>

template<typename T>
typename T::iterator easyfind(T& container, int value) {
	typename T::iterator
	it = std::find(container.begin(), container.end(), value);

	if (it == container.end()) {
		throw (std::out_of_range("Value not found"));
	}
	return it;
}

#endif //EASYFIND_HPP