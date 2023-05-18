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
		printf("이름과 번호 입력 : ");
		scanf("%s%s", list[i].name, list[i].number);

	}

	for (int i = 0; i < 5; i++)
	{
		printf("이름과 연락처: %s, %s\n", list[i].name, list[i].number);
	}
}