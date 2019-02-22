#include <vector>
#include <iostream>

using std::vector;
using std::cout;

int main() {
	vector<char> alphabet;

	for (char letter = 'A'; letter <= 'Z'; letter++) {
		alphabet.push_back(letter);
	}

	for (auto iter = alphabet.begin(); iter != alphabet.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << '\n';

	for (int i = alphabet.size() - 1; i >= 0; --i) {
		cout << alphabet.at(i) << ' ';
	}
	cout << '\n';
}