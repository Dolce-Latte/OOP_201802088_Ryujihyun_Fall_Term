
#include<iostream>

class Strategy {
public:
	virtual int doOperation(int num1, int num2) = 0;
};

class OperationAdd : public Strategy {
public:
	int doOperation(int num1, int num2) override {
		return num1 + num2;
	}
};

class OprationSubstract : public Strategy {
public:
	int doOperation(int num1, int num2) override {
		return num1 - num2;
	}
};

class OperationMutiply : public Strategy {
public: 
	int doOperation(int num1, int num2) override {
		return num1 * num2;
	}
};

class Context {
private:
	Strategy *strategy;
public:
	Context(Strategy *strategy) {
		this->strategy = strategy;
	}

	int executeStrategy(int num1, int num2) {
		return strategy->doOperation(num1, num2);
	}
};

int main() {
	//Context context = Context(new Operation''())
	Context* context = new Context(new OperationAdd());
	std::cout << "10 + 5 = " << context->executeStrategy(10, 5) << std::endl;
	context = new Context(new OprationSubstract());
	std::cout << "10 - 5 = " << context->executeStrategy(10, 5) << std::endl;
	context = new Context(new OperationMutiply());
	std::cout << "10 * 5 = " << context->executeStrategy(10, 5) << std::endl;
	delete context;
	return 0;
}