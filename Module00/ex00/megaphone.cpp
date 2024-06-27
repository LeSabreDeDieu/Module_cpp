/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 21:37:20 by sgabsi            #+#    #+#             */
/*   Updated: 2024/06/20 21:53:10 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main(int argc, char **argv) {
	if (argc == 1) {
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
		return 0;
	}
	else {
		for (int i = 1; i < argc; i++) {
			string str = argv[i];
			for (size_t j = 0; j < str.size(); j++) {
				cout << (char)toupper(str[j]);
			}
		}
	}
	cout << endl;
	return 0;
}