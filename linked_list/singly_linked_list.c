#include <stdio.h>
#include <stdlib.h>
typedef struct _Node 
{
    int data;            /* ������ ������ */
    struct _Node* next;    /* ���� ��带 ����ų ������*/
}Node;

Node* head;

void init() 
{
    head = NULL;
}
void insert(int data) 
{
    Node* ptr;  // tail�� ����� ����� ����ü ������. �� head�� �� ���� ptr�� ���� ���������. �߰� ��� �߰��� ó������ ������ ��ȸ�Ϸ��� head�� �������� �������� �ϴϱ�?
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;    // ������ �Ҵ� 
    newNode->next = NULL;    // next ������ �ʱ�ȭ 

    if (head == NULL) {    // empty
        head = newNode;
    }
    else {
        // not empty, ���� �տ� ��� �߰� 
        if (head->data > newNode->data) // ��尡 ����Ű�� ����� �����Ͱ� ���� ���� ��� �����ͺ��� Ŭ ��쿡��(�� ���� ���� ��尡 �� �տ� ���� ��쿡��)
        {   
            newNode->next = head;// ���θ��� ����� next ������(�ڱ� ����)�� ������ �ִ� ��带 ����Ű�� 
            head = newNode; // ���� �� ��带 ����Ų��. �� �� ��尡 ��尡 �ȴ�. �� ���� �տ� ��尡 �߰��ȴ�
            return; // �Ҳ� �������� else ������ ������.
        }
        // �߰��� ��� �߰� 
        for (ptr = head; ptr->next; ptr = ptr->next) //ptr = head; ptr�� head���� ���� | ptr->next; �̰� ��ü�� ���̸� ��� �ݺ�. �����̶�? ptr�� NULL�̰ų� ptr->next;�� NULL�� �Ǵ°�. �� ������ ������ ���� ��.
        {                               //ptr = ptr->next; �̰� ���� ��尡 ���� ��尡 �Ǵ� ��. �׷��ٰ� ������ ����, �� ptr->next;�� NULL�̸� �ݺ�����.
            if (ptr->data < newNode->data && ptr->next->data > newNode->data) 
            {
                newNode->next = ptr->next; //newNode�� next �����Ͱ� ptr�� next�����Ͱ� ����Ű�� ��带 ����Ų��? 
                ptr->next = newNode;
                return;
            }
        }

        ptr->next = newNode;    // �������� ��� �߰�  
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

    if (head->data == data) {    // ���� ���� ��� ����
        head = cur->next;
        cur->next = NULL; // next �����Ϳ� ���� ����. �� ���� ����.
        free(cur); // ��� ����� ��. �޸𸮿��� ���� �ϴ°Ŵϱ�.
        return 1;
    }

    for (; cur; cur = cur->next) {    // �߰� Ȥ�� ������ ��� ����
        if (cur->data == data) { 
            prev->next = cur->next;
            cur->next = NULL;
            free(cur);
            return 1;
        }
        prev = cur;
    }

    printf("error : there is no %d!\n", data);
    return -1;    // �ش� �����Ͱ� ����Ʈ�� �������� ���� 
}
int search_list(int data) 
{
    Node* ptr;
    for (ptr = head; ptr; ptr = ptr->next) {
        if (ptr->data == data) {    // data �߰�  
            return 1;
        }
    }

    return -1; // ������ �� �߰� 
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