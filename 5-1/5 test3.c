#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age = 25, chest = 90;
	char size;

	if (age < 20)
	{
		if (chest < 85)
		{
			size = 'S';
		}
		else if ((chest >= 85) && (chest < 95))
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
	else
	{
		if (chest < 90)
		{
			size = 'S';
		}
		else if ((chest >= 90) && (chest < 100))
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
	printf("������� %c�Դϴ�.\n", size);

	return 0;

}