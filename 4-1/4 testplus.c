#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	double weight;
	double height;
	double bmi;

	bmi = (((weight / (height * height)) >= 20) && ((weight / (height * height)) < 25)) ;

	printf("������(kg)�� Ű(cm) �Է�: ");
	scanf("%.1lf%.1lf", weight, height);
	printf("%s", bmi ? "ǥ���Դϴ�" : "ü�߰����� �ʿ��մϴ�");

	return 0;

}