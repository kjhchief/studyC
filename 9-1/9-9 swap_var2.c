#include <stdio.h>

void swap(int x, int y);

int main(void)
{
	int a = 10, b = 20;

	swap(a, b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x; // ȣ�� �Ұ�. ��? a������ �ٸ� ��Ͽ��� ���ǵǾ����ϱ�.
	x = y;
	y = temp;
}