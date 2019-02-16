
// could be a struct

class node {

public:
	node(double value) : val {value}, next {nullptr} {};

	double& value() {return this->val;}

	node* get_next() {return next;}

	void set_next(node* next) {this->next = next;}

	~node() {}

private:

	double val;
	node* next;

};