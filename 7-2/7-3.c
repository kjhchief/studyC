#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_char(char ch, int count);

int main(void)
{
	print_char('@', 3);

	return 0;
}

void print_char(char ch, int count)
{
	int i;
	if (count > 10) return;
	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
	return;
}