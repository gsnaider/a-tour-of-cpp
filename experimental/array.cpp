
#include <iostream>

int main() {

	int* a = new int[10];
	int b[10];
	int c[] = {20,21,22,23,24,25,26,27,28,29};

	for (int i = 0; i < 10; i++) {
		a[i] = i;
		b[i] = i + 10;
	}


	for (int i = 0; i < 10; i++) {
		std::cout << a[i] << "\n";
		std::cout << b[i] << "\n";
		std::cout << c[i] << "\n";
	}



}