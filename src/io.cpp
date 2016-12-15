#include <iostream>

int readNumber() {
	std::cout << "Give me a number: ";

	int a;
	std::cin >> a;

	return a;
}

void writeAnswer(int result) {
	std::cout << "The sum of the two numbers is: " << result << std::endl;
}
