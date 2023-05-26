#include <stdio.h>

int main(void)
{
	int num[][4] = {
		{1},
		{5, 6},
		{9, 10, 11}
	};

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", num[i][j]);
		}
		printf("\n");
	}

	return 0;
}