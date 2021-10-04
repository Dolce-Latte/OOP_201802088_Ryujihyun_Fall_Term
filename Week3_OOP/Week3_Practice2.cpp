#include<stdio.h>

int main() {

	char string[100];

	printf("문자를 입력하세요(100자 이내) : \n");
	gets_s(string, sizeof(string));

	printf("입력된 문자는 %s 입니다.\n", string);

	return 0;
}