#include "StringCalculator.hpp"
#include <string>
using std::string;
#include <iostream>
#include <vector>
using std::vector;

int stringCalculator(string equation) {
	if (equation == "")
		return 0;
	int index = 0;
	int sum = 0;
	vector<string> terms(3, "");
	vector<int> nums(3, 0);
	
	for (char c : equation) {
		if (c == ',' || c == '\n')
			index++;
		else
			terms[index] += c;

	}

	for (int i = 0; i < 3; i++) {
		if (terms[i] != "")
			nums[i] = std::stoi(terms[i]);
	}

	for (int i : nums)
		sum += i;

	return sum;
	/*
	if (equation.length()==1) {
		return equation[0] - '0';
	}
	int index;
	index = equation.find(",");
	if (index == string::npos)
	index = equation.find("\n");
	
	string word;
	string word2;
	
	word = equation.substr(0,index);
	word2 = equation.substr(index+1);
	
	
	//std::cout << word << std::endl << word2;
	
	return std::stoi(word) + std::stoi(word2);*/
	return 0;
}