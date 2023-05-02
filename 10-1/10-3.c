#include <stdio.h>

int main(void)
{
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa);	
		pa++;				// pa에 1을 더하면 *(pa +1) 이 된다. 애초에 포인터에는 주소값이 저장되니 +1이더라도 변수 크기니까 *4가 된다.
	}

	return 0;
}