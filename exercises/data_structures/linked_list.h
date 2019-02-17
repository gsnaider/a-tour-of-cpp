#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include "container.h"
#include "node.h"

namespace my_containers {

namespace {
	// Lo de aca no se ve afuera
	int local_var;
}  // namespace

class linked_list : public container {

public:
	linked_list() : head_(nullptr), tail_(nullptr), size_(0) {};

	linked_list(const linked_list& original); // copy constructor.

	// linked_list(linked_list&& original); // move constructor

	// linked_list& operator=(const linked_list& original); // copy assignment

	// linked_list& operator=(linked_list&& original); // move assignment

	void add(double elem) override;

	void remove(int i) override;

	double& operator[](int i) override;

	// This would allow to use the [] as const
	const double& operator[](int i) const override;

	int size() const override {return size_;}

	~linked_list();

private:
	node* head_;
	node* tail_;
	int size_;

	double& get_elem(int i) const;
};

}  // namespace my_containers

#endif