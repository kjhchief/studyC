#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int a = 5;
	if (a > 6)
	{
		if (a > 3)
		{
			printf("안쪽 if문 실행");
		}
	}

		else
		{
			printf("else 실행");
		}

	return 0;

}