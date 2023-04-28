#include <stdio.h>

int main(void)
{
	printf("%d\n", 10);
	printf("%lf\n", 3.4); // 소수점 이하 6자리까지 출력(기본값)
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d과 %d의 합은 %d입니다.\n", 11, 20, 11 + 20);
	printf("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;


}