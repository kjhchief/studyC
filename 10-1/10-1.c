#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ary[3];
	int i;

	*(ary + 0) = 10;							// ary[0] = 10;
	*(ary + 1) = *(ary + 0) + 10;				// ary[1] = ary[0] + 10;

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf("%d", ary + 2);						// &ary[2] (scanf니까 &를 쓴다. 주소)

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));				// ary[i]
	}
	return 0;
}