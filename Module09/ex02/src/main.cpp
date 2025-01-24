/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:38:11 by sgabsi            #+#    #+#             */
/*   Updated: 2025/01/24 18:48:54 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <stdexcept>
#include <cstdlib>
#include <sstream>

std::vector<int> parseArguments(int argc, char** argv) {
    std::vector<int> sequence;
    for (int i = 1; i < argc; ++i) {
        std::istringstream iss(argv[i]);
        int number;
        if (!(iss >> number) || number < 0) {
            throw std::invalid_argument("Error: All arguments must be positive integers.");
        }
        sequence.push_back(number);
    }
    return sequence;
}

void mergeInsertSort(std::vector<int>& vec) {
    if (vec.size() <= 10) {
        for (std::size_t i = 1; i < vec.size(); ++i) {
            int key = vec[i];
            std::size_t j = i;
            while (j > 0 && vec[j - 1] > key) {
                vec[j] = vec[j - 1];
                --j;
            }
            vec[j] = key;
        }
    } else {
        std::size_t mid = vec.size() / 2;
        std::vector<int> left(vec.begin(), vec.begin() + mid);
        std::vector<int> right(vec.begin() + mid, vec.end());
        mergeInsertSort(left);
        mergeInsertSort(right);

        std::size_t i = 0, j = 0, k = 0;
        while (i < left.size() && j < right.size()) {
            if (left[i] < right[j]) {
                vec[k++] = left[i++];
            } else {
                vec[k++] = right[j++];
            }
        }
        while (i < left.size()) vec[k++] = left[i++];
        while (j < right.size()) vec[k++] = right[j++];
    }
}

void mergeInsertSort(std::list<int>& lst) {
    if (lst.size() <= 10) {
        for (std::list<int>::iterator it = ++lst.begin(); it != lst.end(); ++it) {
            int key = *it;
            std::list<int>::iterator j = it;
            while (j != lst.begin() && *--j > key) {
                ++j;
                *j = *--j;
            }
            ++j;
            *j = key;
        }
    } else {
        std::list<int>::iterator mid = lst.begin();
        std::advance(mid, lst.size() / 2);

        std::list<int> left;
        std::list<int> right;

        left.insert(left.begin(), lst.begin(), mid);
        right.insert(right.begin(), mid, lst.end());

        mergeInsertSort(left);
        mergeInsertSort(right);

        lst.clear();
        std::list<int>::iterator it1 = left.begin();
        std::list<int>::iterator it2 = right.begin();
        while (it1 != left.end() && it2 != right.end()) {
            if (*it1 < *it2) {
                lst.push_back(*it1++);
            } else {
                lst.push_back(*it2++);
            }
        }
        while (it1 != left.end()) lst.push_back(*it1++);
        while (it2 != right.end()) lst.push_back(*it2++);
    }
}

int main(int argc, char** argv) {
    try {
        if (argc < 2) {
            throw std::invalid_argument("Usage: ./PmergeMe <positive integers>");
        }

        // Parse arguments
        std::vector<int> sequence = parseArguments(argc, argv);

        // Afficher la séquence non triée
        std::cout << "Unsorted sequence: ";
        for (std::size_t i = 0; i < sequence.size(); ++i) {
            std::cout << sequence[i] << " ";
        }
        std::cout << std::endl;

        // Trier avec std::vector
        std::vector<int> vectorSequence = sequence;
        clock_t startVec = clock();
        mergeInsertSort(vectorSequence);
        clock_t endVec = clock();

        // Afficher la séquence triée
        std::cout << "Sorted sequence: ";
        for (std::size_t i = 0; i < vectorSequence.size(); ++i) {
            std::cout << vectorSequence[i] << " ";
        }
        std::cout << std::endl;

        // Temps d'exécution pour std::vector
        std::cout << "Time to sort with std::vector: "
                  << static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC
                  << " seconds." << std::endl;

        // Trier avec std::list
        std::list<int> listSequence(sequence.begin(), sequence.end());
        clock_t startList = clock();
        mergeInsertSort(listSequence);
        clock_t endList = clock();

        // Temps d'exécution pour std::list
        std::cout << "Time to sort with std::list: "
                  << static_cast<double>(endList - startList) / CLOCKS_PER_SEC
                  << " seconds." << std::endl;

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
