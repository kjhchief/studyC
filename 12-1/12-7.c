#include <stdio.h>

int main(void)
{
	char str[80] = "apple juice";
	char* ps = "banana";	// �����Ϳ� ���ڿ� ����

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
}