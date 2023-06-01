/*
"��" "ȭ" "��" "��" "��" �� ������ �����Ͱ����� ���� ���Ḯ��Ʈ�� ������.
���� ����ü ����, ��� ���� NULL�� �ʱ�ȭ, �� ���� ���� �ʿ�����? ��~���� ��Ұ� �ʿ��ϰ���. �̰� ���� �� �����ϱ� �ϳ��ϳ� �����߰���
head�� mon�� ����Ű�� *next�� tue�� ����Ű��... tail->next�� �������� �����Ѿ߰���..
*/ 
#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node
{
	char* date;
	Node* next;
};

int main(void)
{
	Node* head = NULL;

	head = (Node*)malloc(sizeof(Node));
	head->date = "��";

	Node* node1 = (Node*)malloc(sizeof(Node));
	head->next = node1;
	node1->date = "ȭ";

	Node* node2 = (Node*)malloc(sizeof(Node));
	node1->next = node2;
	node2->date = "��";
	node2->next = NULL;

	printf("node list : ");
	Node* current = head;

	while (current != NULL)
	{
		printf("%s ", current->date);
		current = current->next;
	}

	return 0;



}