#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct student
{
	char* name;
	char* number;
};

int main(void)
{
	struct student list[5];

	for (int i = 0; i < 5; i++)
	{
		list[i].name = (char*)malloc(80);
		list[i].number = (char*)malloc(80);
		printf("�̸��� ��ȣ �Է� : ");
		scanf("%s%s", list[i].name, list[i].number);

	}

	for (int i = 0; i < 5; i++)
	{
		printf("�̸��� ����ó: %s, %s\n", list[i].name, list[i].number);
	}
}