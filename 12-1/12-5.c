#include <stdio.h>

int main(void)
{
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	str[strlen(str) - 1] = '\0'; // 널 문자 이전까지에서 개행 문자가 저장된 곳 위치 찾아서 개행 문자를 널 문자로 바꿈.
	printf("입력된 문자열은 %s입니다\n", str);

	return 0;
}