#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum(int count);

int main(void)
{
	sum(10);
	sum(100);
	return 0;
}

void sum(int count)
{
	int temp = 0;
	for (int i = 1; i <= count; i++)
	{
		temp += i;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", count, temp);
}