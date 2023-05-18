#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char* name[5][80];
	char* number[5][80];

	for (int i = 0; i < 5; i++)
	{
		printf("%d번 사람의 이름과 번호를 입력하세요(띄어쓰기로 구분) : ", i+1);
		scanf("%s %s", name[i], number[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d번 사람 이름, 연락처: %s, %s\n", i+1, name[i], number[i]);

	}

		
}