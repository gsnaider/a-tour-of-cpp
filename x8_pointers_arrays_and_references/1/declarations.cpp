#include <iostream>

int main() {

	char ch = 'G';
	char* a = &ch;

	int b[10] {0,1,2,3,4,5,6,7,8,9};
	
	int* c = new int[10];
	for (int i = 0; i < 10; i++) {
		c[i] = 2*i;
	}

	char* d = new char[6];
	d[0] = 'G';
	d[1] = 'a';
	d[2] = 's';
	d[3] = 't';
	d[4] = 'o';
	d[5] = 'n';
	
	char** e = &d;

	const int f = 42;

	const int* g = &f;

	int h = 30;

	int* const i = &h;


	std::cout << *a << "\n";

	for (int i = 0; i < 10; i++) {
		std::cout << b[i] << " ";
	}
	std::cout << "\n";

	for (int i = 0; i < 10; i++) {
		std::cout << c[i] << " ";
	}
	std::cout << "\n";

	std::cout << d << "\n";

	std::cout << **e << "\n";


	std::cout << f << "\n";
	std::cout << *g << "\n";
	std::cout << *i << "\n";

	

}