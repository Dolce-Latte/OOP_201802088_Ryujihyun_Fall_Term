#include<stdio.h>

int main() {

	char string[100];

	printf("���ڸ� �Է��ϼ���(100�� �̳�) : \n");
	gets_s(string, sizeof(string));

	printf("�Էµ� ���ڴ� %s �Դϴ�.\n", string);

	return 0;
}