#include <stdio.h>
//������ Ȱ��. �Ϲ� ������ a,b,total,avg�� ���� �̸����ε� ����ϸ�, �� �������� ����Ű�� �����͸� ���� �����ص� ����� �� �ִ�.
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

	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n", *pg);

	return 0;

}