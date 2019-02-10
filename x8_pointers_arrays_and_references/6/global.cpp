
#include <iostream>

using namespace std;

int global[10];

int main() {

	cout << "global[0]: " << global[0] << "\n";

	cout << "global[3]: " << global[3] << "\n";

	cout << "global[10]: " << global[10] << "\n";

	cout << "global[54]: " << global[54] << "\n";

	cout << "global[-1]: " << global[-1] << "\n";

	cout << "global[-54]: " << global[-54] << "\n";



	cin >> global[0];

	cin >> global[3];

	cin >> global[10];

	cin >> global[54];

	cin >> global[-1];

	cin >> global[-54];
	
	cout << "global[0]: " << global[0] << "\n";

	cout << "global[3]: " << global[3] << "\n";

	cout << "global[10]: " << global[10] << "\n";

	cout << "global[54]: " << global[54] << "\n";

	cout << "global[-1]: " << global[-1] << "\n";

	cout << "global[-54]: " << global[-54] << "\n";


}