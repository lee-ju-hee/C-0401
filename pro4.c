#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int arr[1000];
    int fre[6] = { 0, };
    int i;
    srand((unsigned)time(NULL));
    for (i = 0; i < 1000; i++)
    {
        arr[i] = rand() % 6 + 1;
    }
    for (i = 0; i < 1000; i++)
    {
        switch (arr[i])
        {
        	case 1:
            	fre[0]++;
            	break;
        	case 2:
            	fre[1]++;
            	break;
        	case 3:
            	fre[2]++;
            	break;
        	case 4:
            	fre[3]++;
            	break;
        	case 5:
            	fre[4]++;
            	break;
        	case 6:
            	fre[5]++;
            	break;
        }
    }
    for (i = 0; i < 6; i++)
    {
        printf("주사위를 돌릴 때 %d 눈금이 나올 확률은:%g\n", i, (double)(fre[i] / 1000.0));
    }
    return 0;
}
