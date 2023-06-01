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
			tail->next = newTrain; // tail�ڿ� ���ο� ĭ�� newTrain�� ���δ�. next�� newTrain���� �Ҵ��ϴ°Ŵϱ�.
			tail = newTrain; // �׸��� ���� ���� newTrain�� ������ tail�� �ȴ�.
			//tail = tail->next; 
		}
	}

	// �ܼ� ��� ���� �������� current�� �����. current�� ó������ head���� �����Ѵ�.
	Train* current = head;
	while (current != NULL) // NULL����, �� ����������.
	{
		printf("%d ", current->seats); //current�� ���� seats����� ���
		current = current->next; // current Ŀ���� ���� ĭ���� �Űܰ���. �׸��� �ٽ� �ݺ�(�� �ݺ��ؼ� ����)
	}

	// ���� �Ҵ�� �޸� ����
	current = head;	// �ٽ� current�� ó������.
	while (current != NULL) // NULL����, �� ����������.
	{
		Train* temp = current; // temp��� ������ ������ �� �ϳ� �����. current�� temp�� ����Ų��.
		current = current->next; // current�� ���� ĭ���� �Űܰ���. 
		free(temp); //temp�� �޸� ����???
		// �����ϸ� temp�� current���� �� ĭ �տ� �ְ� ������ �� ������ temp�� �޸� ����, current�� ���� ĭ�� ����Ű�µ� temp�� current�� ����Ű�°� ����Ű�� ��. �̰� ������ �ݺ�.
	}

	return 0;
}