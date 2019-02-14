#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	if (argc < 2) {
		cout << "You must pass a name as argument!" << endl;
		return -1;
	}
	for (int i = 1; i < argc; i++) {
		string name = argv[i];
		cout << "Hello " << name << "!" << endl;
	}
	
}