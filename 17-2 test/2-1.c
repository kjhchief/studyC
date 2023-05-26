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
		Train* newTrain = (Train*)malloc(sizeof(Train)); // *를 붙여서 포인터 변수로 선언한 이유는? malloc으로 동적 메모리 생성해야하니 주소 저장하려면 포인터 변수가 되어야함.
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

	// 연결 리스트 출력
	Train* current = head;	// current 포인터 변수를 선언함과 동시에 첫 번째 노드(seat1 가진 구조체)를 가리킨다.
	while (current != NULL)
	{
		printf("Seats: %d\n", current->seats); // 현재 current 변수의 seats를 출력
		current = current->next; // next를 통해 다음 노드 가리키기
	}

	// 동적 할당된 메모리 해제
	current = head;
	while (current != NULL)
	{
		Train* temp = current;
		current = current->next;
		free(temp);
	}

	return 0;
}
