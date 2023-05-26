/*
"월" "화" "수" "목" "금" 등 요일을 데이터값으로 갖는 연결리스트를 만들어보자.
먼저 구조체 선언, 헤드 테일 NULL로 초기화, 그 다음 뭐가 필요하지? 월~일의 요소가 필요하겠지. 이건 루프 못 돌리니까 하나하나 만들어야겠지
head가 mon을 가리키고 *next는 tue를 가리키고... tail->next는 마지막을 가리켜야겠지..
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
	head->date = "월";

	Node* node1 = (Node*)malloc(sizeof(Node));
	head->next = node1;
	node1->date = "화";

	Node* node2 = (Node*)malloc(sizeof(Node));
	node1->next = node2;
	node2->date = "수";
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