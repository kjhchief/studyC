#include <stdio.h>

void swap(void);

int main(void)
{
	int a = 10, b = 20;

	swap();
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(void)
{
	int temp;

	temp = a; // 호출 불가. 왜? a변수가 다른 블록에서 정의되었으니까.
	a = b;
	b = temp;
}