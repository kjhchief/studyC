#include <stdio.h>

int main(void)
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;		// �ڷ����� �ٸ��⿡ �̷��� ���.
	printf("%lf\n", pd);

	return 0;
}