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
		Train* newTrain = (Train*)malloc(sizeof(Train)); // 구조체 포인터 선언과 동시에 동적 메모리 할당. 각 반복에서 새로운 메모리를 가리키는 포인터로 갱신된다.
														// for 문 바깥으롸 빼면 무한루프도는 이유는? newTrain이 한 번 만들어지고 모든 newTrain이 같은 주소를 가리키니까?
		newTrain->seats = i + 1;
		newTrain->next = NULL;

		if (head == NULL) //for문 바깥에서 NULL이었으니까 i=0에서는 NULL이지만 i=1반복 부터는 else로 간다.
		{
			head = newTrain;
			tail = newTrain;
		}
		else 
		{
			tail = newTrain; // 이거도 17째 줄에서 새로 만든 Train 구조체의 주소지를 할당한다.
			tail->next = newTrain; // 여기서 next를 통해서 17째 줄에서 새로만든 포인터 변수 주소를 가리키고
		}
	}

	Train* current = head;
	while (current != NULL)
	{
		printf("%d ", current->seats);
		current = current->next;
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