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

void duplicate(vector<string>& v)
// not the way to do it
{
	for (auto p = v.begin(); p!=v.end(); ++p)
		v.insert(p,*p);
}

void print_vector(const vector<string>& v) {
	cout << "Vector: [";
	if (v.size() > 0) {
		for (auto x = v.begin(); x != v.end() - 1; ++x) {
			cout << *x << ',';
		}
		cout << v.at(v.size() - 1);
	}
	cout << "]\n";
}

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

	print_vector(fruits);

	cout << "Fruits starting with 'a'\n";
	for (auto x = fruits.begin(); x != fruits.end(); ++x) {
		if (x->at(0) == 'a') {
			cout << *x << ' ';
		}
	}
	cout << '\n';


	cout << "Deleting fruits starting with 'a'\n";
	auto x = fruits.begin();
	while (x != fruits.end()) {
		if (x->at(0) == 'a') {
			x = fruits.erase(x);
		} else {
			++x;
		}
	}
	
	cout << '\n';

	print_vector(fruits);
}