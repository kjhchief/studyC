#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade); // 하나의 변수 안에 입력할 때는 &를 꼭 붙여준다. 안 붙여주면 r-value로 들어감. 즉 grade에 있는 쓰레기값이 들어간다. 
	// scanf함수는 앞뒤에 공백 혹은 \n같은거 넣지 말기.
	printf("이름 입력 : ");
	scanf("%s", name); //스페이스도 넣지 말기. 그러면 여러개 들어가는거 구분으로 쓰이기 때문.
	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;
}