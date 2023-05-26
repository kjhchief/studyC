/*
���ڷ� �ݺ���Ű��.
*/
#include <stdio.h>
#include <stdlib.h> //malloc ���� ����

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
		newNode->next = NULL; // �� NULL ?? ó���̴ϱ� next���� �ƹ��͵� ���� ���¿��� ����.

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

	// ���� ����Ʈ ���
	printf("node list : ");
	Node* current = head;

	while (current != NULL)
	{
		printf("%d ", current->date);
		current = current->next;
	}

	return 0;
}