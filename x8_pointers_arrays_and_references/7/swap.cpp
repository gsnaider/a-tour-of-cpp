
#include <iostream>

using namespace std;

void swap(int* a, int* b) {
	int aux = *a;
	*a = *b;
	*b = aux;
}


void swap2(int& a, int& b) {
	int aux = a;
	a = b;
	b = aux;
}

int main() {

	cout << "Enter two numbers\n";

	int a;
	int b;

	cin >> a;
	cin >> b;
	
	// swap(&a, &b);
	swap2(a, b);

	cout << a << " " << b << "\n"; 

}