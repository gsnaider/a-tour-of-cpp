#include <iostream>
#include <cmath>


using namespace std;

namespace my_code {

	int main();

	double abs(double);

}

int my_code::main() {
	cout << "In my main!\n";
	cout << my_code::abs(-5.2) << endl;
}

double my_code::abs(double d) {
	return std::abs(d);
}

int main () {
	my_code::main();
}



