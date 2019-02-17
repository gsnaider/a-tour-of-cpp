#ifndef _CONTAINER_H_
#define _CONTAINER_H_

#include <iostream>

namespace my_containers {

class container {

public:
	virtual void add(double elem) = 0;

	virtual void remove(int i) = 0;

	virtual double& operator[](int i) = 0;

	virtual const double& operator[](int i) const = 0;

	virtual int size() const = 0;

	virtual ~container() {}

	friend std::ostream& operator<< (std::ostream& out, const container& cont) {
		out << "[";
		for (int i = 0; i < cont.size(); ++i) {
			out << cont[i];
			if (i < cont.size() - 1) {
				out << ", ";
			}
		}
		out << "]";
		return out;
	}

};

}  // namespace my_containers

#endif