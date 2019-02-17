#include <iostream>
#include <stdexcept>
#include "linked_list.h"

using namespace std;

using my_containers::linked_list; // == import com.google.my.containers.linkedlist

int main() {

	linked_list my_list;

	my_list.add(2);

	my_list.add(3.14);

	my_list.add(54.23);

	cout << "Size: " << my_list.size() << endl;

	cout << "my_list[0]: " << my_list[0] << endl;
	cout << "my_list[1]: " << my_list[1] << endl;
	cout << "my_list[2]: " << my_list[2] << endl;

	try {
		cout << "my_list[3]: " << my_list[3] << endl;	
	} catch (out_of_range& e) {
		cout << "Exception while reading list" << endl;
		cout << e.what() << endl;
	}

	my_list[1] = 234.54;
	
	cout << "my_list[0]: " << my_list[0] << endl;
	cout << "my_list[1]: " << my_list[1] << endl;
	cout << "my_list[2]: " << my_list[2] << endl;
}