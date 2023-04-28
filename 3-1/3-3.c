#include <stdio.h>

int main(void)
{
	short sh = 32767;				// 2바이트의 크기
	int in = 2147483647;			// 4바이트 크기
	long ln = 2147483647;			// 4바이트 크기
	long long lln = 123451234512345;// 아주 큰 크기

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln);

	return 0;
}