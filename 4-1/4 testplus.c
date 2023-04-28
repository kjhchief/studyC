#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	double weight;
	double height;
	double bmi;

	bmi = (((weight / (height * height)) >= 20) && ((weight / (height * height)) < 25)) ;

	printf("몸무게(kg)와 키(cm) 입력: ");
	scanf("%.1lf%.1lf", weight, height);
	printf("%s", bmi ? "표준입니다" : "체중관리가 필요합니다");

	return 0;

}