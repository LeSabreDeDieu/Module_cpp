/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:57:03 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/16 15:00:07 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T> void iter(T *tab, int size, void (*f)(const T &)) {
	for (int i = 0; i < size; i++) {
		f(tab[i]);
	}
}

#endif //ITER_HPP