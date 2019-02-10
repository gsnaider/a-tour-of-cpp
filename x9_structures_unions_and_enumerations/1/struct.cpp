#include <iostream>

struct my_struct {
	bool b;
	char c;
	int i;
	long l;
	double d;
	long double ld;
};

int main() {

	my_struct my_str;

	std::cout << sizeof(my_str) << '\n';

}