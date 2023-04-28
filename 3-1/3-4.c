#include <stdio.h>
// 2의 보수가 뭐지?
int main(void)
{
	unsigned int a;

	a = 4294967295;		// 큰 양수 저장
	printf("%d\n", a);	// %d로 출력했기에 -1이 나옴
	printf("%u\n", a);	

	a = -1;	// 음수 저장
	printf("%u\n", a);
	printf("%d\n", a);

	// 정리 unsigned에는 음수가 저장이 되기는 하지만, 양수만 넣자.


	return 0;
}