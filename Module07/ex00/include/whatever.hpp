/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:31:57 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/16 14:51:34 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap (T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min (T a, T b) {
	return a <= b ? a : b;
}

template <typename T>
T max (T a, T b) {
	return a >= b ? a : b;
}

#endif //WHATEVER_HPP