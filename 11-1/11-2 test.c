#include <stdio.h>

int main(void)
{
	int ch;
	int cnt = 0;
	ch = getchar();

	while (ch != '\n')
	{
		if (ch >= 'a' && ch <= 'z') cnt++;
		ch = getchar();
	}

	printf("�ҹ����� ���� : %d\n", cnt);

	return 0;
}