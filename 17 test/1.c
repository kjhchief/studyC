#include <stdio.h>

struct marriage
{
	char name[20];
	int age;
	char sex;
	double height;
};

struct marriage m1 = { "Andy", 22, 'm', 187.5 };
struct marriage* mp = &m1;

int main(void)
{
	printf("�̸� : %s\n", mp->name);
	printf("���� : %d\n", mp->age);
	printf("���� : %c\n", mp->sex);
	printf("Ű : %.1lf\n", mp->height);

}
