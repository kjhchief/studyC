#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("���� a�� : %d\n", *pa);
	pa = &b;						//const���� pa�� �������� �ٲ۴�. �׷� const �־���? *pa = 20; �� ���� ������ pa�� ���������Ͽ� �ٲ� �� ����.
	printf("���� b�� : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("���� a�� : %d\n", *pa);

	return 0;
}