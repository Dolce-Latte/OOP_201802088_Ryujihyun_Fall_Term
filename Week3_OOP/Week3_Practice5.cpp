#include<iostream>

using namespace std;

int main() {
	int num = 10;

	cout << "int num 주소 0x" << &num << endl \
		<< "int num 값 : " << num << endl << endl;

	//Variable 의 주소를 참조
	int& ref = num;

	cout << "레퍼런스 주소 : 0x : " << &ref << endl \
		<< "레퍼런스가 참조하는 값 : " << ref << endl << endl;

	//Variable의 주소 또 다른 메모리에 저장
	int* ptr = &num;

	cout << "포인터 주소 : 0x " << &ptr << endl \
		<< "포인터가 참조하는 값 : " << *ptr << endl;

	return 0;
}