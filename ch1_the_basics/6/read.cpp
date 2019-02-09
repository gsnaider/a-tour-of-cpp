

#include <iostream>

using namespace std;

int main() {
	string name;

	cout << "Enter your name: ";
	cin >> name;

	char gender;

	cout << "Enter your gender (M/F): ";
	cin >> gender;

	while (!(gender == 'M' || gender == 'F')) {
		cout << "Invalid gender. Please try again\n";
		cout << "Enter your gender (M/F): ";
		cin >> gender;
	}

	bool graduated;

	cout << "Graduated?: ";
	cin >> graduated;

	int age;

	cout << "Enter your age: ";
	cin >> age;

	double weight;

	cout << "Enter your weight: ";
	cin >> weight;

	cout << "\n";
	cout << "Name: " << name << "\nGender: " << gender << "\nAge: " << age << "\nWeight: " << weight << "\nGraduated: " << graduated << "\n";

}