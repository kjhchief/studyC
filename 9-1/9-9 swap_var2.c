#include <stdio.h>

void swap(int x, int y);

int main(void)
{
	int a = 10, b = 20;

	swap(a, b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x; // 호출 불가. 왜? a변수가 다른 블록에서 정의되었으니까.
	x = y;
	y = temp;
}