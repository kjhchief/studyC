#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);
	str[5] = '\0';
	printf("%s\n", str);

	return 0;
}