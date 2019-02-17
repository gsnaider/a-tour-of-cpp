#include <iostream>
#include <stdexcept>
#include "linked_list.h"

using namespace std;

using my_containers::linked_list; // == import com.google.my.containers.linkedlist

void func(linked_list list) {
	cout << "Testing copy construct\n";
	cout << "Size: " << list.size() << endl;
	cout << list << endl;

	cout << "Remove 2\n";
	list.remove(2);

	cout << "Size: " << list.size() << endl;
	cout << list << endl;
}

int main() {

	linked_list my_list;

	my_list.add(2);

	my_list.add(3.14);

	my_list.add(54.23);

	my_list.add(4.42);

	cout << "Size: " << my_list.size() << endl;
	cout << my_list << endl;

	try {
		cout << "my_list[4]: " << my_list[4] << endl;	
	} catch (out_of_range& e) {
		cout << "Exception while reading list" << endl;
		cout << e.what() << endl;
	}

	my_list[0] = 0.5;
	my_list[1] = 1.54;
	my_list[2] = 2.5;
	my_list[3] = 3.5;
	
	cout << "Size: " << my_list.size() << endl;
	cout << my_list << endl;

	func(my_list);

	cout << "Size: " << my_list.size() << endl;
	cout << my_list << endl;



	cout << "Remove 1\n";
	my_list.remove(1);

	cout << "Size: " << my_list.size() << endl;
	cout << my_list << endl;

	cout << "Remove 0\n";
	my_list.remove(0);


	cout << "Remove last\n";
	my_list.remove(my_list.size() - 1);

	cout << "Size: " << my_list.size() << endl;
	cout << my_list << endl;


	cout << "Add 256\n";
	my_list.add(256);


	cout << "Size: " << my_list.size() << endl;
	cout << my_list << endl;

	cout << "Remove all\n";
	while (my_list.size() > 0) {
		my_list.remove(0);	
	}

	cout << "Size: " << my_list.size() << endl;
	cout << my_list << endl;


}