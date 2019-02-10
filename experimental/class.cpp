#include <iostream>

class Vector {
	public:
		Vector(int s) : elems {new double[s]}, sz {s} {}

		double& operator[](int i) {
			return elems[i];
		}
		
		int size() {
			return sz;
		}

	private:
		double* elems;
		int sz;
};

int main() {

	std::cout << "Enter amount of numbers: ";
	int size;
	std::cin >> size;
	Vector v(size);

	std::cout << "Enter "<< v.size() << " numbers.\n";
	for (int i = 0; i < v.size(); i++) {
		std::cin >> v[i];
	}

	std::cout << "\n";

	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << "\n";
	}

}