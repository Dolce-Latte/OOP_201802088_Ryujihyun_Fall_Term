#include<iostream>
#include<string>


template<typename T>
auto sum(T x) {
	return x;
}
/* 선언하는 위치가 바뀌면 안된다. */
template<typename T, typename... Args>
auto sum(T x, Args... args) {
	return x + sum(args...); /* 매개변수를 1개만 가지는 함수를 정의해야한다. */
}
int main() {

	auto x = sum(42.5, 10, 11.1f);
	std::cout << x;
	return 0;
}