#include<iostream>

using namespace std;

int main() {
	int num = 10;

	cout << "int num �ּ� 0x" << &num << endl \
		<< "int num �� : " << num << endl << endl;

	//Variable �� �ּҸ� ����
	int& ref = num;

	cout << "���۷��� �ּ� : 0x : " << &ref << endl \
		<< "���۷����� �����ϴ� �� : " << ref << endl << endl;

	//Variable�� �ּ� �� �ٸ� �޸𸮿� ����
	int* ptr = &num;

	cout << "������ �ּ� : 0x " << &ptr << endl \
		<< "�����Ͱ� �����ϴ� �� : " << *ptr << endl;

	return 0;
}