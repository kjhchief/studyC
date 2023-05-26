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
	Train* head = NULL, * tail = NULL;
	int i;

	for (i = 0; i < 5; i++)
	{
		Train* newTrain = (Train*)malloc(sizeof(Train)); // *�� �ٿ��� ������ ������ ������ ������? malloc���� ���� �޸� �����ؾ��ϴ� �ּ� �����Ϸ��� ������ ������ �Ǿ����.
		newTrain->seats = i + 1;
		newTrain->next = NULL;

		if (head == NULL)
		{
			head = tail = newTrain;
		}
		else
		{
			tail->next = newTrain;
			tail = newTrain;
		}
	}

	// ���� ����Ʈ ���
	Train* current = head;	// current ������ ������ �����԰� ���ÿ� ù ��° ���(seat1 ���� ����ü)�� ����Ų��.
	while (current != NULL)
	{
		printf("Seats: %d\n", current->seats); // ���� current ������ seats�� ���
		current = current->next; // next�� ���� ���� ��� ����Ű��
	}

	// ���� �Ҵ�� �޸� ����
	current = head;
	while (current != NULL)
	{
		Train* temp = current;
		current = current->next;
		free(temp);
	}

	return 0;
}
