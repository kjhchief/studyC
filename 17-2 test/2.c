#include <stdio.h>
#include <stdlib.h>

typedef struct train Train;

struct train
{
	int seats;
	struct train* next;
};

int main(void)
{
	Train* head = NULL, * tail = NULL; // Train ����ü�� ����Ű�� ������ ����. �� �� NULL�� �ʱ�ȭ������ ���Ḯ��Ʈ�� ����ִ� ��. ���Ŀ� ������Ʈ �ؾ� ��.
	int i;
	for (i = 0; i < 5; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));	// head�� tail�� ������ �ּҸ� ����Ų��.
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));	// ���ο� ��� ������ ���ο� ����� �ּ� �Ҵ�.
			tail = tail->next; // tail�� tail->next�� �Ҵ�??
		}
	}
	return 0;
}