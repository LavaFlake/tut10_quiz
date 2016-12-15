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

int main() {
	int x {readNumber()};
	int y {readNumber()};

	int result {x+y};

	writeAnswer(result);

	return 0;
}
