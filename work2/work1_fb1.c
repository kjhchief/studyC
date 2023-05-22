#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

struct student {
    char name[80];
    char number[80];
};

int main(void)
{
    struct student* list;
    int i;

    list = (struct student*)malloc(sizeof(struct student) * 5);
    if (!list) {
        printf("failed to allocation.\n");
        exit(-ENOMEM);
    }

    for (i = 0; i < 5; i++) {
        printf("이름과 번호 입력 : ");
        scanf("%s %s", list[i].name, list[i].number);
    }

    for (i = 0; i < 5; i++) {
        printf("이름과 연락처: %s, %s\n", list[i].name, list[i].number);
    }

    free(list);

    return 0;
}