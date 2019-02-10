#include <iostream>

using namespace std;

struct my_struct {
	int member[10];
};


int main() {

	my_struct str;

	cout << "str.member[0]: " << str.member[0] << "\n";

	cout << "str.member[3]: " << str.member[3] << "\n";

	cout << "str.member[10]: " << str.member[10] << "\n";

	cout << "str.member[54]: " << str.member[54] << "\n";

	cout << "str.member[-1]: " << str.member[-1] << "\n";

	cout << "str.member[-54]: " << str.member[-54] << "\n";

	
	cin >> str.member[0];

	cin >> str.member[3];

	cin >> str.member[10];

	cin >> str.member[54];

	cin >> str.member[-1];

	cin >> str.member[-54];
	
	cout << "str.member[0]: " << str.member[0] << "\n";

	cout << "str.member[3]: " << str.member[3] << "\n";

	cout << "str.member[10]: " << str.member[10] << "\n";

	cout << "str.member[54]: " << str.member[54] << "\n";

	cout << "str.member[-1]: " << str.member[-1] << "\n";

	cout << "str.member[-54]: " << str.member[-54] << "\n";
}