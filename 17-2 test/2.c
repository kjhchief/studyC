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
	Train* head = NULL, * tail = NULL; // Train 구조체를 가리키는 포인터 변수. 둘 다 NULL로 초기화됐으니 연결리스트가 비어있는 것. 이후에 업데이트 해야 함.
	int i;
	for (i = 0; i < 5; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));	// head와 tail이 동일한 주소를 가리킨다.
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));	// 새로운 노드 생성시 새로운 노드의 주소 할당.
			tail = tail->next; // tail에 tail->next를 할당??
		}
	}
	return 0;
}