#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL)
	{
		printf("�޸� ����\n");
		exit(1);
	}
	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");
	for (size_t i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}
	printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0));
	free(pi);

	return 0;
}