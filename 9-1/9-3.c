#include <stdio.h>
//포인터 활용. 일반 변수를 a,b,total,avg와 같은 이름으로도 사용하며, 그 변수들을 가리키는 포인터를 간접 참조해도 사용할 수 있다.
int main(void)
{
	int a = 10, b = 15, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	return 0;

}