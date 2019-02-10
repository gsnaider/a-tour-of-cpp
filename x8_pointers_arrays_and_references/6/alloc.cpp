#include <iostream>

using namespace std;

int main() {

	int* alloc = new int[10];

	cout << "alloc[0]: " << alloc[0] << "\n";

	cout << "alloc[3]: " << alloc[3] << "\n";

	cout << "alloc[10]: " << alloc[10] << "\n";

	cout << "alloc[54]: " << alloc[54] << "\n";

	cout << "alloc[-1]: " << alloc[-1] << "\n";

	cout << "alloc[-54]: " << alloc[-54] << "\n";

	cout << "alloc[500]: " << alloc[500] << "\n";

	cin >> alloc[0];

	cin >> alloc[3];

	cin >> alloc[10];

	cin >> alloc[54];

	cin >> alloc[-1];

	cin >> alloc[-54];

	cin >> alloc[500];
	
	cout << "alloc[0]: " << alloc[0] << "\n";

	cout << "alloc[3]: " << alloc[3] << "\n";

	cout << "alloc[10]: " << alloc[10] << "\n";

	cout << "alloc[54]: " << alloc[54] << "\n";

	cout << "alloc[-1]: " << alloc[-1] << "\n";

	cout << "alloc[-54]: " << alloc[-54] << "\n";

	cout << "alloc[500]: " << alloc[500] << "\n";
}