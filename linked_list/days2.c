/*
숫자로 반복시키기.
*/
#include <stdio.h>
#include <stdlib.h> //malloc 쓰기 위함

typedef struct node Node;
struct node
{
	int date;
	Node* next;
};

int main(void)
{
	Node* head = NULL, * tail = NULL;
	int i;
	for (i = 0; i < 10; i++)
	{
		Node * newNode = (Node*)malloc(sizeof(Node));
		newNode->date = i + 1;
		newNode->next = NULL; // 왜 NULL ?? 처음이니까 next에는 아무것도 없는 상태에서 시작.

		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
	}

	// 연결 리스트 출력
	printf("node list : ");
	Node* current = head;

	while (current != NULL)
	{
		printf("%d ", current->date);
		current = current->next;
	}

	return 0;
}