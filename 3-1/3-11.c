#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("���� �Է� : ");
	scanf("%c", &grade); // �ϳ��� ���� �ȿ� �Է��� ���� &�� �� �ٿ��ش�. �� �ٿ��ָ� r-value�� ��. �� grade�� �ִ� �����Ⱚ�� ����. 
	// scanf�Լ��� �յڿ� ���� Ȥ�� \n������ ���� ����.
	printf("�̸� �Է� : ");
	scanf("%s", name); //�����̽��� ���� ����. �׷��� ������ ���°� �������� ���̱� ����.
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);

	return 0;
}