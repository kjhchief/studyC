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
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{"이이이", 33, "222-1111", "서울 서서울"},
		{"삼삼삼", 44, "333-1111", "강원 독도"},
		{"사사사", 55, "221-1111", "전전라 독도"},
		{"오오오", 66, "666-1111", "서서마음 독도"}
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