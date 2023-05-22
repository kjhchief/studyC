#include <stdio.h>

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void print_list(struct address* lp);

int main(void)
{
	struct address list[5] = {
		{"ȫ�浿", 23, "111-1111", "�︪�� ����"},
		{"������", 33, "222-1111", "���� ������"},
		{"����", 44, "333-1111", "���� ����"},
		{"����", 55, "221-1111", "������ ����"},
		{"������", 66, "666-1111", "�������� ����"}
	};

	print_list(list);

	return 0;
}

void print_list(struct address* lp)
{
	int i;

	for (size_t i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n",
			(lp+i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}