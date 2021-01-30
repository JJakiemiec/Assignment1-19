#include "StringCalculator.hpp"
#include <string>
using std::string;
#include <iostream>

int stringCalculator(string equation) {
	if (equation == "")
		return 0;
		if (equation.length()==1) {
	return equation[0] - '0';
		}
int index;
index = equation.find(",");

string word;
string word2;

word = equation.substr(0,index);
word2 = equation.substr(index+1);


std::cout << word << std::endl << word2;

return std::stoi(word) + std::stoi(word2);
}