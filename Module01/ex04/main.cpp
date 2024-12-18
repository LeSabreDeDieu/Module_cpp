/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgabsi <sgabsi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:51:09 by sgabsi            #+#    #+#             */
/*   Updated: 2024/12/18 11:10:50 by sgabsi           ###   ########.fr       */
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
	size_t pos;
    string result = "";
    while((pos = str.find(from, start_pos)) != string::npos) {
		result += str.substr(start_pos, pos - start_pos);
		result += to;
		start_pos = pos + from.length();
    }
	result += str.substr(start_pos);
    return result;
}

int main(int argc, char const *argv[])
{
	if (argc != 4) {
		Usage();
		return 1;
	}
	if (string(argv[2]) == "")
	{
		cout << "The string to replace is empty" << endl;
		Usage();
		return 1;
	}
	std::ifstream inFile(argv[1]);
	if (!inFile.is_open()) {
		cout << "Error opening file: " << argv[1] << endl;
		return 1;
    }

	string tmp = string(argv[1]) + ".replace";
	std::ofstream outFile(tmp.c_str());
	if (!outFile.is_open())
	{
		cout << "Error opening outfile: " << tmp << endl;
		inFile.close();
		return 1;
	}
	string line = "";
	while (std::getline(inFile, line)) {
		outFile << replaceAll(line, argv[2], argv[3]) << std::flush;
	}

	inFile.close();
	outFile.close();
	
	return 0;
}
