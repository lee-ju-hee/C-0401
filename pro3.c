#include <stdio.h>
int menu_display()
{
	int select;
	system("cls");
	printf("1. ��Ģ����\n");
	printf("2. �α׿���\n");
	printf("3. ���α׷� ����\n");
	printf("��ȣ�� �Է��ϼ���.");
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
	printf("1. ��������\n");
	printf("2. ��������\n");
	printf("3. ����������\n");
	printf("4. ��������\n");
	printf("5. ����������\n");
	printf("6. ���θ޴�\n");
	select = getch() -48;
	return select;
}

void add()
{
	int num1, num2;
	printf("ù��° ������ �Է��ϼ���: ");
	scanf("%d", &num1);
	printf("�ι�° ������ �Է��ϼ���: ");
	scanf("%d", &num2);
	printf("%d + %d = %d", num1, num2, num1 + num2);
	press_any_key();
}

void sub()
{
	int num1, num2;
	printf("ù��° ������ �Է��ϼ���: ");
	scanf("%d", &num1);
	printf("�ι�° ������ �Է��ϼ���: ");
	scanf("%d", &num2);
	printf("%d - %d = %d", num1, num2, num1 - num2);
	press_any_key();
}

void div()
{
	int num1, num2;
	printf("ù��° ������ �Է��ϼ���: ");
	scanf("%d", &num1);
	printf("�ι�° ������ �Է��ϼ���: ");
	scanf("%d", &num2);
	printf("%d / %d = %d", num1, num2, num1 / num2);
	press_any_key();
}

void mul()
{
	int num1, num2;
	printf("ù��° ������ �Է��ϼ���: ");
	scanf("%d", &num1);
	printf("�ι�° ������ �Է��ϼ���: ");
	scanf("%d", &num2);
	printf("%d * %d = %d", num1, num2, num1 * num2);
	press_any_key();
}

void div_1()
{
	int num1, num2;
	printf("ù��° ������ �Է��ϼ���: ");
	scanf("%d", &num1);
	printf("�ι�° ������ �Է��ϼ���: ");
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
	printf("1. �ڿ��α�\n");
	printf("2. ���α�\n");
	printf("3. ���θ޴�\n");
	select = getch() -48;
	return select;
}
void nat_log()
{
	double num;
	printf("���� �Է�: ");
	scanf("%lf", &num);
	printf("%f�� �ڿ��α� ����-> %f\n", num, log(num));
	press_any_key();
}

void dec_log()
{
	double num;
	printf("���� �Է�: ");
	scanf("%lf", &num);
	printf("%f�� �ڿ��α� ����-> %f\n", num, log(num));
	press_any_key();
}

void press_any_key()
{
	printf("\n\n");
	printf("�ƹ�Ű�� ������ ���� �޴��� �̵�");
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
