#include<stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	float  s = 0, v = 0;
	printf("Input a");// проверка ввода данных
	if(!scanf_s("%d", &a))
	{
		printf("wrong input");
		return 0;
	}
	printf("Input b");
	if (!scanf_s("%d", &b))
	{
		printf("wrong input");
		return 0;
	}
	printf("Input c");
	if (!scanf_s("%d", &c))
	{
		printf("wrong input");
		return 0;
	}
	s = 2 * a * b + 2 * b * c + 2 * a * c;
		v = a * b * c;
		printf("Sqr area=%.3f ", s);
		printf("Volume %.3f ", v);

		printf("false");

	return 0;
}