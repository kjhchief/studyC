#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//무한반복 재귀호출 함수

void fruit(void);

int main(void)
{
	fruit();

	return 0;
}

void fruit(void)
{
	printf("apple\n");
	fruit();
}