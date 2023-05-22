#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

struct student {
	char name[80];
	char number[80];
};


int main(void)
{
	FILE* fp ;
	struct student* list;
	int ch;
	int res;
	list = (struct student*)malloc(sizeof(struct student) * 20);
	if (!list) {
		printf("failed to allocation.\n");
		exit(-ENOMEM);
	}

	fp = fopen("student.dat", "a+");
	if (fp == NULL)
	{
		printf("파일을 열지 못했습니다.\n");
		return 1;
	}

	while(1)
	{ 
		int i = 0;
		res = fscanf(fp, "%s, %s", list[i].name, list[i].number);
		if (res == EOF) break;
		i++;
	}
	fseek(fp, 0, SEEK_SET);
	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}



	printf("\n");
	for (size_t i = 0; i < 5; i++)
	{
		printf("이름과 번호 입력 : ");
		scanf("%s %s", list[i].name, list[i].number);
		fprintf(fp, "\n%s, %s", list[i].name, list[i].number);

	}
	fseek(fp, 0, SEEK_SET);
	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}


	fclose(fp);
	free(list);

	return 0;
}