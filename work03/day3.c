#include <stdio.h>
#include <stdlib.h>

typedef struct train
{
	int seats;
	struct train* next;
} Train;

int main(void)
{
	Train* head = NULL, * tail = NULL;

	int i;
	for (i = 0; i < 5; i++)
	{
		Train* newTrain = (Train*)malloc(sizeof(Train)); // ����ü ������ ����� ���ÿ� ���� �޸� �Ҵ�. �� �ݺ����� ���ο� �޸𸮸� ����Ű�� �����ͷ� ���ŵȴ�.
														// for �� �ٱ����� ���� ���ѷ������� ������? newTrain�� �� �� ��������� ��� newTrain�� ���� �ּҸ� ����Ű�ϱ�?
		newTrain->seats = i + 1;
		newTrain->next = NULL;

		if (head == NULL) //for�� �ٱ����� NULL�̾����ϱ� i=0������ NULL������ i=1�ݺ� ���ʹ� else�� ����.
		{
			head = newTrain;
			tail = newTrain;
		}
		else 
		{
			tail = newTrain; // �̰ŵ� 17° �ٿ��� ���� ���� Train ����ü�� �ּ����� �Ҵ��Ѵ�.
			tail->next = newTrain; // ���⼭ next�� ���ؼ� 17° �ٿ��� ���θ��� ������ ���� �ּҸ� ����Ű��
		}
	}

	Train* current = head;
	while (current != NULL)
	{
		printf("%d ", current->seats);
		current = current->next;
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