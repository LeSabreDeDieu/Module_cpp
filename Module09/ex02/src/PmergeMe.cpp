/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 08:48:46 by sgabsi            #+#    #+#             */
/*   Updated: 2025/02/04 09:18:57 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void merge(std::vector<int>& vec, std::vector<int>& left, std::vector<int>& right) {
	size_t i = 0, j = 0, k = 0;

	while (i < left.size() && j < right.size()) {
		if (left[i] <= right[j]) {
			vec[k++] = left[i++];
		} else {
			vec[k++] = right[j++];
		}
	}
	while (i < left.size()) vec[k++] = left[i++];
    while (j < right.size()) vec[k++] = right[j++];
}

void mergeSort(std::vector<int>& vec) {
	if (vec.size() == 1) {
		return ;
	}
	size_t mid = vec.size() / 2;
	std::vector<int> left(vec.begin(), vec.begin() + mid);
	std::vector<int> right(vec.begin() + mid, vec.end());
	mergeSort(left);
	mergeSort(right);
	merge(vec, left, right);
}

void merge(std::list<int>& lst, std::list<int>& left, std::list<int>& right) {
	std::list<int>::iterator it1 = left.begin();
	std::list<int>::iterator it2 = right.begin();

	while (it1 != left.end() && it2 != right.end()) {
		if (*it1 <= *it2) {
			lst.push_back(*it1++);
		} else {
			lst.push_back(*it2++);
		}
	}
	while (it1 != left.end()) lst.push_back(*it1++);
	while (it2 != right.end()) lst.push_back(*it2++);
}

void mergeSort(std::list<int>& lst) {
	if (lst.size() == 1) {
		return ;
	}
	std::list<int>::iterator mid = lst.begin();
	std::advance(mid, lst.size() / 2);

	std::list<int> left;
	std::list<int> right;

	left.insert(left.begin(), lst.begin(), mid);
	right.insert(right.begin(), mid, lst.end());

	mergeSort(left);
	mergeSort(right);
	lst.clear();
	merge(lst, left, right);
}