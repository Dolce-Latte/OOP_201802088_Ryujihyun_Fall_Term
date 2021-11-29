#include<iostream>
#include<string>


template<typename T>
auto sum(T x) {
	return x;
}
/* �����ϴ� ��ġ�� �ٲ�� �ȵȴ�. */
template<typename T, typename... Args>
auto sum(T x, Args... args) {
	return x + sum(args...); /* �Ű������� 1���� ������ �Լ��� �����ؾ��Ѵ�. */
}
int main() {

	auto x = sum(42.5, 10, 11.1f);
	std::cout << x;
	return 0;
}