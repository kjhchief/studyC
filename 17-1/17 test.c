#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct carcker
{
	int price;
	int calories;
};

int main(void)
{
	struct carcker c1;

	printf("�ٻ���� ���ݰ� ������ �Է��ϼ��� : ");
	scanf("%d%d", &c1.price, &c1.calories);

	printf("�ٻ���� ���� : %d��\n", c1.price);
	printf("�ٻ���� ���� : %dkcal\n", c1.calories);

	return 0;
}