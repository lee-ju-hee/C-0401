#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define x_MAX 79
#define Y_MAX 24
void move_arrow_key(char key, int *num, int *diff)
{
	switch(key)
	{
		case 72:
			*num = *num + *diff;
			break;
		case 75:
			*diff = *diff - 1;
			if(*diff <1)
				*diff = 1;
			break;
		case 77:
			*diff = *diff + 1;
			break;
		case 80:
			*num = *num - *diff;
			if(*num<1000)
				*num = 1000;
		default:
			return;
	}
}
void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
int main()
{
	char key;
	int num = 1000;
	int diff = 1;
	do
	{
		gotoxy(20, 5);
		printf("%d", num);
		gotoxy(20, 10);
		printf("증가 또는 감소 시킬 단위: %d\n", diff);
		
		key = getch();
		move_arrow_key(key, &num, &diff);
	}
	while(key!=27);
	return 0;
}
