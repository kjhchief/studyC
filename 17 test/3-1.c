#include <stdio.h>

typedef enum { CYAN, MAGENTA, YELLOW = 5, BLACK } COLOR;
typedef enum { UP, DOWN, LEFT, RIGHT } ARROW;

int main(void)
{
	COLOR my_color = 5, c;
	ARROW direction = 0;

	for (c = 0; c <= 6; c++)
	{
		direction++; // 1, 2, 3, 4, 1, 2
		direction = direction % 4; // 1, 2, 3, 0, 1, 2
		if (c == my_color) break; //0==5, 1==5, 2==5, 3==5, 4==5, 5==5 
	}

	switch (direction)
	{
	case UP: printf("현재방향 : 위 0"); break;
	case DOWN: printf("현재방향 : 아래 1"); break;
	case LEFT: printf("현재방향 : 왼쪽 2"); break;
	case RIGHT: printf("현재방향 : 오른쪽 3"); break;
	}
	printf("\n");
	printf("%d", direction);

	return 0;
}