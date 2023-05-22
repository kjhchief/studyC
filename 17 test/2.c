#include <stdio.h>
#include <stdlib.h>

typedef struct train Train;

struct train
{
	int seats;
	struct train* next;		// 구조체 자신을 가리켜야 함
};

int main(void)
{
	Train* head = NULL, * tail = NULL;
	int i;
	for (i = 0; i < 5; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));
			tail = tail->next;
		}
	}
}