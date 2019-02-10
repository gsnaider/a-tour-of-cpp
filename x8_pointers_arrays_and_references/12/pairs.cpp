#include <iostream>

using namespace std;

struct char_pair {
	char first;
	char second;
	char_pair(char f, char s) : first {f}, second {s} {}
};

int count_pair(const char_pair& p, const string& s) {

	if (s.length() < 2) {
		return 0;
	}

	int count = 0;
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] == p.first && s[i+1] == p.second) {
			count++;
		}
	}

	return count;
}

int main() {

	cout << count_pair(char_pair('a', 'b'), "xabaacbaxabb") << '\n';

	cout << count_pair(char_pair('j', 'b'), "xabaacbaxabb") << '\n';

	cout << count_pair(char_pair('j', 'b'), "") << '\n';

}