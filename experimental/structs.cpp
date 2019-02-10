#include <iostream>

using namespace std;

struct Person {
	string name;
	int age;

	// Person(string name, int age) {
	// 	this->name = name;
	// 	this->age = age;
	// }
	
	Person(string name, int age) :name{name}, age{age} {}
};

int main() {

	Person p("Gaston", 25);

	// p.name = "Gaston";
	// p.age = 25;

	cout << "{" << p.name << ", " << p.age << "}\n";

}