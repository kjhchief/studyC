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
			tail->next = newTrain; // tail뒤에 새로운 칸에 newTrain을 붙인다. next를 newTrain으로 할당하는거니까.
			tail = newTrain; // 그리고 새로 붙인 newTrain이 이제는 tail이 된다.
			//tail = tail->next; 
		}
	}

	// 콘솔 출력 전용 포인터인 current를 만든다. current는 처음에는 head부터 시작한다.
	Train* current = head;
	while (current != NULL) // NULL까지, 즉 끝까지간다.
	{
		printf("%d ", current->seats); //current가 가진 seats멤버를 찍고
		current = current->next; // current 커서는 다음 칸으로 옮겨간다. 그리고 다시 반복(즉 반복해서 찍음)
	}

	// 동적 할당된 메모리 해제
	current = head;	// 다시 current는 처음으로.
	while (current != NULL) // NULL까지, 즉 끝까지간다.
	{
		Train* temp = current; // temp라는 포인터 변수를 또 하나 만든다. current는 temp를 가리킨다.
		current = current->next; // current는 다음 칸으로 옮겨간다. 
		free(temp); //temp의 메모리 해제???
		// 정리하면 temp가 current보다 한 칸 앞에 있고 루프가 돌 때마다 temp의 메모리 해제, current는 다음 칸을 가리키는데 temp가 current가 가리키는거 가리키게 함. 이걸 끝까지 반복.
	}

	return 0;
}