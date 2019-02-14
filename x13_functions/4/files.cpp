#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {

	if (argc < 2) {
		cout << "You must pass a filename as parameter" << endl;
		return -1;
	}

	string line;
	for (int i = 1; i < argc; i++) {
		string filename = argv[i];
		ifstream file(filename);
		if (file.is_open()) {
			while (getline(file, line)) {
				cout << line << endl;
			}
			file.close();
		} else {
			cout << "Unable to open file " << filename << endl;
		}
	}

	return 0;

}