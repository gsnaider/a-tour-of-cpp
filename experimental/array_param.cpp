
#include <iostream>

using namespace std;

void change(int arr[]) {
	arr[3] = 42;
}


int main() {

	// int* arr = new int[10];
	int arr[10];

	arr[3] = 5;

	change(arr);

	cout << arr[3] << "\n";

}