#include <stdexcept>
#include "linked_list.h"

using std::out_of_range;

namespace my_containers {

void linked_list::add(double value) {
	node* new_node = new node(value);

	if (size() == 0) {
		head_ = new_node;
	} else {
		tail_->next(new_node);
	}
	tail_ = new_node;
	++size_;
}

double& linked_list::operator[](int i) {
	if (i < 0 || i >= size()) {
		throw out_of_range {"linked_list.operator[]"};
	}
	// Due to the condition above, head must be initialized.
	node* curr = head_;
	while (i > 0) {
		curr = curr->next();
		--i;
	}
	return curr->value();
}

linked_list::~linked_list() {
	node* curr = head_;
	while (curr) {
		node* next = curr->next();
		delete curr;
		curr = next;
	}
}

}  // namespace my_containers