#include "linked_list.h"
#include <stdexcept>

using namespace std;

void linked_list::add(double value) {
	node* new_node = new node(value);
	if (size() == 0) {
		head = new_node;
	} else {
		tail->set_next(new_node);
	}
	tail = new_node;
	sz++;
}

double& linked_list::operator[](int i) {
	if (i < 0 || i >= size()) {
		throw out_of_range {"linked_list.operator[]"};
	}
	// Due to the condition above, head must be initialized.
	node* curr = head;
	while (i > 0) {
		curr = curr->get_next();
		i--;
	}
	return curr->value();

}

linked_list::~linked_list() {
	node* curr = head;
	while (curr) {
		node* next = curr->get_next();
		delete curr;
		curr = next;
	}
}