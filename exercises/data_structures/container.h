class container {

public:
	virtual void add(double elem) = 0;

	// virtual void remove(int i) = 0;

	virtual double& operator[](int i) = 0;

	virtual int size() const = 0;

	virtual ~container() {}
};