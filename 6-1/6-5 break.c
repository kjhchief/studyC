#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;
	}
	printf("������ �� : %d\n", sum);
	printf("���������� ���� �� : %d\n", i);

	return 0;
}