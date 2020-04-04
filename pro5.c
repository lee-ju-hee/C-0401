#include <stdio.h>
#include <stdarg.h>
#include <string.h>
double mean(int num, ...)
{
	int i;
	va_list valist;
	double sum = 0.0;

	va_start(valist, num);

	for (i = 0; i < num; i++)
	{
    	sum += va_arg(valist, int);
	}
 
	va_end(valist);
 
	return sum / num;
}

double median(int count, ...)
{
	int arr[100];
	int i = 0;
	int min;
	double median;

	va_list ap;
	va_start(ap, count);

	while (i < count)
	{
    	arr[i] = va_arg(ap, int);
    	i++;
	}

	ascending_sort(arr, count);

	if (count % 2 == 1)
	{
    	median = (double)arr[count / 2];
	}
	else
	{
    	median = ((double)(arr[count / 2] + arr[count / 2 - 1]) / (double)2); 
	}

	va_end(ap);
	return median;
}

void ascending_sort(int *arr, int len)
{
	int min, i, j;
	for (i = 0; i < len; i++)
	{
    	min = i;
    	for (j = i + 1; j < len; j++)
    	{
			if (arr[j] < arr[min])
    		{
				int temp = arr[min];
    			arr[min] = arr[j];
				arr[j] = temp;
    		}
    	}
	}
}

void concatenate_str(int num, ...)
{
	int i = 0;

	char str[100] = "";
	va_list ap;
	va_start(ap, num);

	while (i < num)
	{
		strcat(str, va_arg(ap, char*));
		i++;
	}
	printf("%s", str);
	va_end(ap);
}

int main()
{
	int i;
	int arr[7] = { 0, };
	int sum = 0;
	
	for (i = 0; i < 7; i++)
	{
    	arr[i] = (7 - i);
	}

	printf("정렬 전:\n");

	for (i = 0; i < 7; i++)
    	printf("%d번: %d\n", i, arr[i]);

	ascending_sort(arr, sizeof(arr) / sizeof(int)); 
	printf("정렬 후:\n");

	for (i = 0; i < 7; i++)
		printf("%d번: %d\n", i, arr[i]);

	printf("중위값:%lf", median(7, 1, 2, 3, 4, 5, 6, 7));
	printf("\n");
	printf("배열에 있는 숫자들의 평균:%f\n", mean(7, 1, 2, 3, 4, 5, 6, 7));
	printf("문자열 'tem', 'per', 'ature'를 합치면:");
	concatenate_str(3, "tem", "per", "atrue");
	printf("\n");
	return 0;
}

 



