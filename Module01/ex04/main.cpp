/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:51:09 by sgabsi            #+#    #+#             */
/*   Updated: 2024/06/27 16:38:02 by sgabsi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void Usage() {
	cout << "./sed <filename> <string 1> <string 2>" << endl;
}

string replaceAll(string str, const string& from, const string& to) {
	size_t start_pos = 0;
    string result;
    while(start_pos < str.length()) {
        size_t pos = str.find(from, start_pos);
        if (pos != string::npos) {
            result += str.substr(start_pos, pos - start_pos);
            result += to;
            start_pos = pos + from.length();
        } else {
            result += str.substr(start_pos);
            break;
        }
    }
    return result;
}

int main(int argc, char const *argv[])
{
	if (argc != 4) {
		Usage();
		return 1;
	}
	std::ifstream inFile(argv[1]);
	if (!inFile.is_open()) {
		cout << "Error opening file: " << argv[1] << endl;
		return 1;
    }

	string tmp = string(argv[1]) + ".tmp";
	std::ofstream outFile(tmp.c_str());
	string line = "";
	while (std::getline(inFile, line)) {
		outFile << replaceAll(line, argv[2], argv[3]) << endl;
	}

	inFile.close();
	outFile.close();
	
	std::rename((string(argv[1]) + ".tmp").c_str(), argv[1]);
	return 0;
}
