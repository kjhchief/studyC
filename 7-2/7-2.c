#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_num(void);

int main(void)
{
	int result;

	result = get_num();
	printf("��ȯ�� : %d\n", result);
	return 0;
}

int get_num(void)
{
	int num;

	printf("��� �Է� : ");
	scanf("%d", &num);
	while (num < 0)
	{
		printf("����� �Է��ϼ���!\n");
		printf("��� �Է� : ");
		scanf("%d", &num);
	}

	return num;
}