#include <vector>
#include <string>
#include <iostream>
#include <sstream>

using std::vector;
using std::cout;
using std::cin;
using std::string;
using std::getline;
using std::istringstream;

int main() {
	vector<string> fruits;
	string fruit_words;
	cout << "Enter fruits separated by commas:\n";
	getline(cin,fruit_words);
	cout << fruit_words << '\n';

	istringstream fruits_stream(fruit_words);

	string fruit;
	while (getline(fruits_stream, fruit, ',')) {
		fruits.push_back(fruit);
	}

	for (auto x = fruits.begin(); x != fruits.end(); ++x) {
		cout << *x << ' ';
	}
	cout << '\n';


	cout << "Fruits starting with 'a'\n";
	for (auto x = fruits.begin(); x != fruits.end(); ++x) {
		if (x->at(0) == 'a') {
			cout << *x << ' ';
		}
	}
	cout << '\n';
}