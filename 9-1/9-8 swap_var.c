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

	temp = a; // ȣ�� �Ұ�. ��? a������ �ٸ� ��Ͽ��� ���ǵǾ����ϱ�.
	a = b;
	b = temp;
}