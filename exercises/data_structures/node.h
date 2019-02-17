#ifndef _NODE_H_
#define _NODE_H_

namespace my_containers {

// could be a struct

// struct node_str {
// 	double val;
// 	node_str* next;
// }

class node {

public:
	node(double value) : val_(value), next_(nullptr) {};

	double& value() {return val_;}

	node* next() {return next_;}

	void next(node* next) {next_ = next;}

private:
	double val_;
	node* next_;
};

} // namespace my_containers

#endif