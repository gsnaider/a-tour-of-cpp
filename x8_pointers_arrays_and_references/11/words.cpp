

#include <iostream>

using namespace std;

const int MAX_VALUE = 100;

struct words_struct {
	string* words;
	int size;

	words_struct(string* w, int s) : words {w}, size {s} {}
};

words_struct read_words() {
	string* words = new string[MAX_VALUE];
	int size = 0;

	string word = "";
	do {
		cout << "Enter a word ('quit' to stop): ";
		cin >> word;
		if (word != "quit") {
			words[size] = word;
		}
		size++;
	} while(size < MAX_VALUE && word != "quit");

	return words_struct(words, size - 1);

}

void print_words(const words_struct& words) {
	for (int i = 0; i < words.size; i++) {
		cout << words.words[i] << '\n';
	}
}

int main() {

	words_struct words = read_words();
	print_words(words);

}