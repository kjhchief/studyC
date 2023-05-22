#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}

	return 0;
}