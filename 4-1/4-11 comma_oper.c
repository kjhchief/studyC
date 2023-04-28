#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int a = 10, b = 20;
	int res;

	res = (++a, ++b);

	printf("a:%d, b:%d\n", a, b);

	return 0;

}