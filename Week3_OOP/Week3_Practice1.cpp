#include<string>
#include<iostream>

int main() {

	//문자열을 입력 받음
	std::string s;
	std::cout << "문자를 입력하세요(100자 이내). : " << std::endl;
	std::cin >> s;
	std::cout << "입력된 문자는 " << s << "입니다. " << std::endl;

	return 0;
}