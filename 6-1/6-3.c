#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 1;

	do
	{
		a = a * 2;
	} while (a < 10);
	printf("a : %d\n", a);

	return 0;
}