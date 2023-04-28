#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf의 결과 : %d\n", res, a);

	return 0;

}