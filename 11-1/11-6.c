#include <stdio.h>

void my_gets(char* str, int size);

int main(void)
{
	char str[7];

	my_gets(str, sizeof(str));
	printf("�Է��� ���ڿ� : %s\n", str);

	return 0;
}

void my_gets(char* str, int size)
{
	int ch;
	int i = 0;

	ch = getchar();	// Ű���� �Է½ÿ��� ���� �� �� ���� �Է�������, �ڵ�󿡼��� ���ۿ� �ִ� ���� 1���ھ� ������
	while ((ch != '\n') && (i < size - 1))
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
}