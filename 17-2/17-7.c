#include <stdio.h>

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

int main(void)
{
	struct address list[5] = {
		{"ȫ�浿", 23, "111-1111", "�︪�� ����"},
		{"������", 33, "222-1111", "���� ������"},
		{"����", 44, "333-1111", "���� ����"},
		{"����", 55, "221-1111", "������ ����"},
		{"������", 66, "666-1111", "�������� ����"}
	};
	int i;

	for (size_t i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n",
			list[i].name, list[i].age, list[i].tel, list[i].addr);
	}

	return 0;
}