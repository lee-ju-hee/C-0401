#include <stdio.h>
int menu_display()
{
	int select;
	system("cls");
	printf("1. 사칙연산\n");
	printf("2. 로그연산\n");
	printf("3. 프로그램 종료\n");
	printf("번호를 입력하세요.");
	select = getch() - 48;
	
	return select; 
}

void sub_main1()
{
	int num;
	while((num = sub_menu_display1())!= 6)
	{
		switch(num)
		{
			case 1:
				add();
				break;
			case 2:
				sub();
				break;
			case 3:
				div();
				break;
			case 4:
				mul();
				break;
			case 5:
				div_1();
				break;
			default:
				break;
		}
	}
}

int sub_menu_display1()
{
	int select;
	system("cls");
	printf("1. 덧셈연산\n");
	printf("2. 뺄셈연산\n");
	printf("3. 나눗셈연산\n");
	printf("4. 곱셈연산\n");
	printf("5. 나머지연산\n");
	printf("6. 메인메뉴\n");
	select = getch() -48;
	return select;
}

void add()
{
	int num1, num2;
	printf("첫번째 정수를 입력하세요: ");
	scanf("%d", &num1);
	printf("두번째 정수를 입력하세요: ");
	scanf("%d", &num2);
	printf("%d + %d = %d", num1, num2, num1 + num2);
	press_any_key();
}

void sub()
{
	int num1, num2;
	printf("첫번째 정수를 입력하세요: ");
	scanf("%d", &num1);
	printf("두번째 정수를 입력하세요: ");
	scanf("%d", &num2);
	printf("%d - %d = %d", num1, num2, num1 - num2);
	press_any_key();
}

void div()
{
	int num1, num2;
	printf("첫번째 정수를 입력하세요: ");
	scanf("%d", &num1);
	printf("두번째 정수를 입력하세요: ");
	scanf("%d", &num2);
	printf("%d / %d = %d", num1, num2, num1 / num2);
	press_any_key();
}

void mul()
{
	int num1, num2;
	printf("첫번째 정수를 입력하세요: ");
	scanf("%d", &num1);
	printf("두번째 정수를 입력하세요: ");
	scanf("%d", &num2);
	printf("%d * %d = %d", num1, num2, num1 * num2);
	press_any_key();
}

void div_1()
{
	int num1, num2;
	printf("첫번째 정수를 입력하세요: ");
	scanf("%d", &num1);
	printf("두번째 정수를 입력하세요: ");
	scanf("%d", &num2);
	printf("(%d) %% (%d) = %d", num1, num2, num1 % num2);
	press_any_key();
}

void sub_main2()
{
	int num;
	while((num = sub_menu_display2()) != 3)
	{
		switch(num)
		{
			case 1:
				nat_log();
				break;
			case 2:
				dec_log();
				break;
			default:
				break;
		}
	}
}

int sub_menu_display2()
{
	int select;
	system("cls");
	printf("1. 자연로그\n");
	printf("2. 상용로그\n");
	printf("3. 메인메뉴\n");
	select = getch() -48;
	return select;
}
void nat_log()
{
	double num;
	printf("숫자 입력: ");
	scanf("%lf", &num);
	printf("%f를 자연로그 연산-> %f\n", num, log(num));
	press_any_key();
}

void dec_log()
{
	double num;
	printf("숫자 입력: ");
	scanf("%lf", &num);
	printf("%f를 자연로그 연산-> %f\n", num, log(num));
	press_any_key();
}

void press_any_key()
{
	printf("\n\n");
	printf("아무키나 누르면 이전 메뉴로 이동");
	getch();
} 
int main()
{
	int num;
	while ((num = menu_display())!=3)
	{
		switch(num)
		{
			case 1 : sub_main1();
				break;
			case 2 : sub_main2();
				break;
			default: break;
		}
	}
	return 0;
}
