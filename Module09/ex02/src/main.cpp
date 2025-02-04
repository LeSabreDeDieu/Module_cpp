/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 18:38:11 by sgabsi            #+#    #+#             */
/*   Updated: 2025/02/04 09:36:21 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <stdexcept>
#include <cstdlib>
#include <iomanip>

#include "PmergeMe.hpp"

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

void afficherTempsTraitement(std::size_t n, clock_t start, clock_t end) {
    double dureeSecondes = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    std::cout << std::fixed << std::setprecision(15);
    
    std::cout << "Time to process a range of " << n
              << " elements with std::vector: "
              << dureeSecondes << " seconds." << std::endl;
}

int main(int argc, char** argv) {
    try {
        if (argc < 2) {
            throw std::invalid_argument("Usage: ./PmergeMe <positive integers>");
        }

        std::vector<int> sequence = parseArguments(argc, argv);

        std::cout << "Before: [ ";
        for (std::size_t i = 0; i < sequence.size(); ++i) {
            std::cout << sequence[i];
            if (i != sequence.size() - 1) std::cout << ", ";
        }
        std::cout << " ] " << std::endl;

        std::vector<int> vectorSequence = sequence;
        clock_t startVec = clock();
        mergeSort(vectorSequence);
        clock_t endVec = clock();

        std::cout << "After: [ ";
        for (std::size_t i = 0; i < vectorSequence.size(); ++i) {
            std::cout << vectorSequence[i];
            if (i != sequence.size() - 1) std::cout << ", ";
        }
        std::cout << " ] " << std::endl;

        afficherTempsTraitement(vectorSequence.size(), startVec, endVec);

        std::list<int> listSequence(sequence.begin(), sequence.end());
        clock_t startList = clock();
        mergeSort(listSequence);
        clock_t endList = clock();

        afficherTempsTraitement(listSequence.size(), startList, endList);

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}
