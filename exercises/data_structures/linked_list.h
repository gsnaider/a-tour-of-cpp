
#include "container.h"
#include "node.h"

class linked_list :public container {

public:
	linked_list() : head {nullptr}, tail {nullptr}, sz {0} {};

	linked_list(const linked_list& original); // copy constructor.

	linked_list(linked_list&& original); // move constructor

	linked_list& operator=(const linked_list& original); // copy assignment

	linked_list& operator=(linked_list&& original); // move assignment

	void add(double elem) override;

	// void remove(int i) override;

	double& operator[](int i) override;

	int size() const override {return this->sz;}

	~linked_list();

private:
	node* head;
	node* tail;
	int sz;
};