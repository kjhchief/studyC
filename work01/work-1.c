#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char* name[5][80];
	char* number[5][80];

	for (int i = 0; i < 5; i++)
	{
		printf("%d�� ����� �̸��� ��ȣ�� �Է��ϼ���(����� ����) : ", i+1);
		scanf("%s %s", name[i], number[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d�� ��� �̸�, ����ó: %s, %s\n", i+1, name[i], number[i]);

	}

		
}