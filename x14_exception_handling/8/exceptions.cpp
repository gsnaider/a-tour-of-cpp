#include <iostream>
#include <stdexcept>

void func(int digit) {
	if (digit < 0 || digit > 9) {
		throw std::out_of_range {"out of range digit."};
	} else {
		std::cout << digit << std::endl;
	}
}


int main(int argc, char* argv[]) {

	if (argc != 2) {
		std::cout << "Enter one numeric argument\n";
		return -1;
	}

	int digit = strtol(argv[1], nullptr, 10);

	try {

		func(digit);

	} catch(std::out_of_range) {
		std::cout << "Out of range exception" << std::endl;
	}
}
