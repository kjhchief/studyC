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
	printf("이름 : %s\n", mp->name);
	printf("나이 : %d\n", mp->age);
	printf("성별 : %c\n", mp->sex);
	printf("키 : %.1lf\n", mp->height);

}
