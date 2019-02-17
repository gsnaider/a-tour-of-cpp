#include <iostream>

class A {

public:
	virtual int foo() {return 1;}

};

class B :public A {
	
public:
	virtual int foo() {return 2;}

};

using namespace std;

int main() {
	A a;
	B b;

	cout << a.foo() << endl;
	cout << b.foo() << endl;

	A* a2 = new B();

	cout << a2->foo() << endl;


}