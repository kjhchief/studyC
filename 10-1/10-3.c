#include <stdio.h>

int main(void)
{
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	printf("�迭�� �� : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa);	
		pa++;				// pa�� 1�� ���ϸ� *(pa +1) �� �ȴ�. ���ʿ� �����Ϳ��� �ּҰ��� ����Ǵ� +1�̴��� ���� ũ��ϱ� *4�� �ȴ�.
	}

	return 0;
}