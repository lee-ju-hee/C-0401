#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	
	for (i=1; i<=9; i++)
	{
		system("cls");
		for (j=1; j<=9; j++)
		{
			printf("%d * %d = %d || ", i, j, i*j);
		}
		printf("\n");
		
		printf("아무키나 누르세요");
		getch();
	}

	return 0;
}
