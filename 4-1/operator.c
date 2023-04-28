#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 5, b = 0;
	if ((a > 0) || (++b > 0)) printf("OK\n");
	printf("%d, %d\n", a, b);

	return 0;
}