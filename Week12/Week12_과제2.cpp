#include<iostream>
#include<string>
template<typename T>
void swap(T& x, T& y) {
	T tmp = x;
	x = y;
	y = tmp;
}
template<>
typename std::string swap<void>(std::string& x, std::string& y) {
	std::string tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int a = 1;
	int b = 2;
	float c = 3.3;
	float d = 4.4;
	std::string e = "World";
	std::string f = "Hello";
	swap<int>(a, b);
	swap<float>(c, d);
	swap<std::string>(e, f);
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "c: " << c << ", d: " << d << std::endl;
	std::cout << "e: " << e << ", f: " << f << std::endl;
	return 0;
}