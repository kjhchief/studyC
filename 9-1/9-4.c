#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;

	printf("변수 a값 : %d\n", *pa);
	pa = &b;						//const지만 pa의 참조값을 바꾼다. 그럼 const 왜쓰나? *pa = 20; 과 같이 변수를 pa를 간접참조하여 바꿀 수 없음.
	printf("변수 b값 : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("변수 a값 : %d\n", *pa);

	return 0;
}