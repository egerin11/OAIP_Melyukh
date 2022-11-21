#include<stdio.h>

int main()
{
	int a = 0, b = 0, R = 0;
	printf("Input a ");
	if (!scanf_s("%d", &a))//проверка ввода данных
	{
		printf("wrong input");
		return 0;
	}
	printf("Input b ");
	if (!scanf_s("%d", &b))
	{
		printf("wrong input");
		return 0;
	}
		R = a * a + b * b;
		if (R == 1)
			printf("Point M lays ");
		else
			printf("false");
		



	return 0;
}
