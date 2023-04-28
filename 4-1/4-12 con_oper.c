#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b; // 참이면 a가 거짓이면 b가 res에 할당. a > b는 거짓이므로 b가 res에 할당 
	printf("큰 값 : %d\n", res);

	return 0;

}