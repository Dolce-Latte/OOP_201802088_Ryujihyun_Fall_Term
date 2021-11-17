#include<iostream>
#include<string>
#include<cassert>

class Base {
	std::string s;
public:
	Base() : s("Base") { std::cout << "Base class constructor" << std::endl; }
	virtual void what() { std::cout << s << std::endl; }
};

class Derived : public Base {
	std::string s;
public:
	Derived() :s("Derived"), Base() { std::cout << "Derived class constructor" << std::endl; }
	void what() { std::cout << s << std::endl; }
};

int main() {
	Base p;
	Derived c;

	std::cout << "=== Pointer ===" << std::endl;
	Base* xx = &c; //Ok. upcast
	Derived* yy = dynamic_cast<Derived*>(&p); //Down cast 시도
	//yy 객체가 nullptr임
	//assert(yy!=nullptr);
	yy->what();//여기서 에러발생
	getchar();
	return 0;
}