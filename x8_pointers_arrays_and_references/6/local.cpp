
#include <iostream>

using namespace std;

int main() {

	int local[10];

	cout << "local[0]: " << local[0] << "\n";

	cout << "local[3]: " << local[3] << "\n";

	cout << "local[10]: " << local[10] << "\n";

	cout << "local[54]: " << local[54] << "\n";

	cout << "local[-1]: " << local[-1] << "\n";

	cout << "local[-54]: " << local[-54] << "\n";

	
	cin >> local[0];

	cin >> local[3];

	cin >> local[10];

	cin >> local[54];

	cin >> local[-1];

	cin >> local[-54];
	
	cout << "local[0]: " << local[0] << "\n";

	cout << "local[3]: " << local[3] << "\n";

	cout << "local[10]: " << local[10] << "\n";

	cout << "local[54]: " << local[54] << "\n";

	cout << "local[-1]: " << local[-1] << "\n";

	cout << "local[-54]: " << local[-54] << "\n";
}