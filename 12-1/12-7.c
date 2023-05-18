#include <stdio.h>

int main(void)
{
	char str[80] = "apple juice";
	char* ps = "banana";	// 포인터에 문자열 연결

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
}