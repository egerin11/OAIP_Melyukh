#include<stdio.h>

int main()
{
	int x = 0, x_1 = 0, y = 0, y_1 = 0, d = 0;
	printf("Input coordinate x");
	if (!scanf_s("%d", &x))//поверка ввода данных
	{
		printf("wrong input");
		return 0;
	}
	fflush(stdin);
	printf("Input coordinate y");
	if (!scanf_s("%d", &y))
	{
		printf("wrong input");
		return 0;
	}
	fflush(stdin);
	printf("Input coordinate x_1 ");
	if (!scanf_s("%d", &x_1))
	{
		printf("wrong input");
		return 0;
	}
	fflush(stdin);
	printf("Input coordinate y_1");
	if (!scanf_s("%d", &y_1))
	{
		printf("wrong input");
		return 0;
	}
	fflush(stdin);
	d = x * x_1 + y * y_1;
	if (d == 0)
		printf("right triangle");
	else if (d > 0)
		printf("acute triangle");
	else
		printf("obtuse triangle");
	return 0;
}
