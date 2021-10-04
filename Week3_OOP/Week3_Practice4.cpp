#include<iostream>

void increment(int* x) {
	++* x;
}

int main() {

	int x = 55;
	int* pointerOfx = &x;
	std::cout << "Before increment : " << x << std::endl;
	increment(&x);
	std::cout << "After increment : " << x << std::endl;

	return 0;
}