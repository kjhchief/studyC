#include <stdio.h>
#include <stdlib.h>
typedef struct _Node 
{
    int data;            /* 저장할 데이터 */
    struct _Node* next;    /* 다음 노드를 가리킬 포인터*/
}Node;

Node* head;

void init() 
{
    head = NULL;
}
void insert(int data) 
{
    Node* ptr;  // tail과 비슷한 기능의 구조체 포인터. 왜 head를 안 쓰고 ptr을 새로 만들었을까. 중간 노드 추가시 처음부터 끝까지 순회하려면 head를 기준으로 움직여야 하니까?
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;    // 데이터 할당 
    newNode->next = NULL;    // next 포인터 초기화 

    if (head == NULL) {    // empty
        head = newNode;
    }
    else {
        // not empty, 가장 앞에 노드 추가 
        if (head->data > newNode->data) // 헤드가 가리키는 노드의 데이터가 새로 만든 노드 데이터보다 클 경우에만(즉 새로 만든 노드가 맨 앞에 가는 경우에만)
        {   
            newNode->next = head;// 새로만든 노드의 next 포인터(자기 참조)가 다음에 있는 헤드를 가리키고 
            head = newNode; // 헤드는 새 노드를 가리킨다. 즉 새 노드가 헤드가 된다. 즉 가장 앞에 노드가 추가된다
            return; // 할꺼 다했으니 else 밖으로 나간다.
        }
        // 중간에 노드 추가 
        for (ptr = head; ptr->next; ptr = ptr->next) //ptr = head; ptr이 head에서 시작 | ptr->next; 이거 자체가 참이면 계속 반복. 거짓이란? ptr이 NULL이거나 ptr->next;가 NULL이 되는것. 즉 노드기차 끝까지 가는 것.
        {                               //ptr = ptr->next; 이건 현재 노드가 다음 노드가 되는 것. 그러다가 끝까지 가면, 즉 ptr->next;가 NULL이면 반복종료.
            if (ptr->data < newNode->data && ptr->next->data > newNode->data) 
            {
                newNode->next = ptr->next; //newNode의 next 포인터가 ptr의 next포인터가 가리키는 노드를 가리킨다? 
                ptr->next = newNode;
                return;
            }
        }

        ptr->next = newNode;    // 마지막에 노드 추가  
    }

}
int deleteNode(int data) 
{
    Node* cur, * prev;
    cur = prev = head;

    if (head == NULL) {    // empty list 
        printf("error: list is empty!\n");
        return -1;
    }

    if (head->data == data) {    // 가장 앞의 노드 삭제
        head = cur->next;
        cur->next = NULL; // next 포인터에 값이 없다. 즉 연결 끊기.
        free(cur); // 요게 지우는 것. 메모리에서 삭제 하는거니까.
        return 1;
    }

    for (; cur; cur = cur->next) {    // 중간 혹은 마지막 노드 삭제
        if (cur->data == data) { 
            prev->next = cur->next;
            cur->next = NULL;
            free(cur);
            return 1;
        }
        prev = cur;
    }

    printf("error : there is no %d!\n", data);
    return -1;    // 해당 데이터가 리스트에 존재하지 않음 
}
int search_list(int data) 
{
    Node* ptr;
    for (ptr = head; ptr; ptr = ptr->next) {
        if (ptr->data == data) {    // data 발견  
            return 1;
        }
    }

    return -1; // 데이터 미 발견 
}
void printList() {
    Node* ptr;
    for (ptr = head; ptr->next; ptr = ptr->next) {
        printf("%d => ", ptr->data);
    }
    printf("%d\n", ptr->data);
}
int main() {
    int data;

    init();
    insert(100);
    insert(200);
    insert(10);
    insert(150);
    search_list(11);
    printList();

    return 0;
}