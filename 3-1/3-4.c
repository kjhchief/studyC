#include <stdio.h>
// 2�� ������ ����?
int main(void)
{
	unsigned int a;

	a = 4294967295;		// ū ��� ����
	printf("%d\n", a);	// %d�� ����߱⿡ -1�� ����
	printf("%u\n", a);	

	a = -1;	// ���� ����
	printf("%u\n", a);
	printf("%d\n", a);

	// ���� unsigned���� ������ ������ �Ǳ�� ������, ����� ����.


	return 0;
}