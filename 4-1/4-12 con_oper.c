#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b; // ���̸� a�� �����̸� b�� res�� �Ҵ�. a > b�� �����̹Ƿ� b�� res�� �Ҵ� 
	printf("ū �� : %d\n", res);

	return 0;

}