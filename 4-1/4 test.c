#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int seats;
	int audience;
	double rate;

	seats = 70;
	audience = 65;

	rate = ((double)audience / (double)seats) * 100;

	printf("ÀÔÀå·ü: %.1lf%%", rate);

	return 0;

}