
#include <iostream>

using namespace std;


void f(char c) {
	cout << "f(" << c << ")\n";
}

void g(char& c) {
	cout << "g(" << c << ")\n";
}

void h(const char& c) {
	cout << "h(" << c << ")\n";
}

int main() {

	cout << "Calling with 'a'\n";
	f('a');
	// g('a'); invalid
	h('a');

	cout << "Calling with 50\n";
	f(50);
	// g(50); invalid
	h(50);

	cout << "Calling with 3300\n";
	f(3300); // Warning: overflow in implicit constant conversion
	// g(3300); Invalid, Warning: overflow in implicit constant conversion
	h(3300); // Warning: overflow in implicit constant conversion

	cout << "Calling with c\n";
	char c = 'G';
	f(c);
	g(c);
	h(c);

	cout << "Calling with uc\n";
	unsigned char uc = 'N';
	f(uc);
	// g(uc); invalid
	h(uc);

	cout << "Calling with sc\n";
	signed char sc = 'S';
	f(sc);
	// g(sc); invalid
	h(sc);
}