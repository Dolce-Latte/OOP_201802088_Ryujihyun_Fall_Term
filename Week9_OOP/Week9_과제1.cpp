#include<iostream>

class Base {
public:
	void func_1() {};
protected:
	void func_2() {};
private:
	int x_;
};

//protected에서 public으로 변경
class Derived : public Base {
public:
	void func_3() {
		func_1();
		func_2();
	}
};

int main() {
	Derived d;
	d.func_3();
	d.func_1();
}