#include <stdio.h>

int main(void)
{
	short sh = 32767;				// 2����Ʈ�� ũ��
	int in = 2147483647;			// 4����Ʈ ũ��
	long ln = 2147483647;			// 4����Ʈ ũ��
	long long lln = 123451234512345;// ���� ū ũ��

	printf("short�� ���� ��� : %d\n", sh);
	printf("int�� ���� ��� : %d\n", in);
	printf("long�� ���� ��� : %ld\n", ln);
	printf("long long�� ���� ��� : %lld\n", lln);

	return 0;
}