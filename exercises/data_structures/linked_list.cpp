#ifndef _LINKED_LIST_CPP_
#define _LINKED_LIST_CPP_

#include <stdexcept>
#include "linked_list.h"

using std::out_of_range;
using std::to_string;


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

void linked_list::remove(int i) {
	if (i < 0 || i >= size()) {
		throw out_of_range {"linked_list.remove(" + to_string(i) + ")"};
	}

	if (i == 0) {
		node* to_delete = head_;
		head_ = head_->next();
		delete to_delete;
		if (size_ == 1) {
			tail_ = nullptr;
		}
	} else {
		node* previous_to_delete = head_;
		while (i > 1) {
			previous_to_delete = previous_to_delete->next();
			--i;
		}
		node* to_delete = previous_to_delete->next();
		previous_to_delete->next(to_delete->next());
		delete to_delete;

		if (i == size_ - 1) {
			tail_ = previous_to_delete;
		}

	}

	--size_;

}

double& linked_list::get_elem(int i) const {
	if (i < 0 || i >= size()) {
		throw out_of_range {"linked_list.operator[" +  to_string(i) + "]"};
	}
	// Due to the condition above, head must be initialized.
	node* curr = head_;
	while (i > 0) {
		curr = curr->next();
		--i;
	}
	return curr->value();
}

const double& linked_list::operator[](int i) const {
	return get_elem(i);
}

double& linked_list::operator[](int i) {
	return get_elem(i);
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

#endif