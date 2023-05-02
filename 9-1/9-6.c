#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;		// 자료형이 다르기에 이렇게 노노.
	printf("%lf\n", pd);

	return 0;
}