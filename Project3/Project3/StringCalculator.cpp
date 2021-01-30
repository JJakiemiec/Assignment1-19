#include "StringCalculator.hpp"
#include <string>
using std::string;

int stringCalculator(string equation) {
	if (equation == "")
		return 0;
	return equation[0] - '0';
}