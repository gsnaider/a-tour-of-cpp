#include <iostream>

// Could use fptr in all fucntions.
typedef void (*fptr)(char*, int&);

void f1(char* arg1 , int& arg2) {
	std::cout << "In f1(" << arg2 << ")" << std::endl;
}

void f2(void (*func)(char*, int&)) {
	int arg = 2;
	(*func)(nullptr, arg);
}

void (*f3())(char*, int&) {
	return f1;
}

fptr f4(fptr func) {
	return func;
}

int main() {
	void (*f1_pointer)(char*, int&) = f1;

	int arg = 1;
	(*f1_pointer)(nullptr, arg);

	f2(f1_pointer);

	arg+=5;
	(*f3())(nullptr, arg);

	arg+=5;
	(*f4(f1_pointer))(nullptr, arg);

}