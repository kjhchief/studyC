#include <stdio.h>

int main(void)
{
	int a;
	int b, c;
	double da;
	char ch;
	
	a = 10;			// 여기서 a는 값을 받는 공간으로 쓰이기에 l-value. 
	b = a;			// 여기서 a는 다른 변수에 들어가는 값으로 쓰였기에 r-value.
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값: %d\n", a);
	printf("변수 b의 값: %d\n", b);
	printf("변수 c의 값: %d\n", c);
	printf("변수 da의 값: %.1lf\n", da);
	printf("변수 ch의 값: %c\n", ch);
	
}