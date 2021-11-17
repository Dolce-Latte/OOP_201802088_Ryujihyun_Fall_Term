#include <iostream>

//void swapInt(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void swapFloat(float& a, float& b) {
//	float temp = a;
//	a = b;
//	b = temp;
//}
template<typename T>
void swap(T& x, T& y) {
	T tmp = x;
	x = y;
	y = tmp;
}
int main() {
	int a = 1;
	int b = 2;
	float c = 3.3;
	float d = 4.4;
	/*swapInt(a, b);
	swapFloat(c, d);*/
	swap<int>(a, b);
	swap<float>(c, d);
	std::cout << "a: " << a << ", b: " << b << std::endl;
	std::cout << "c: " << c << ", d: " << d << std::endl;
	return 0;
}