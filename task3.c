#include "stdio.h"
#include "math.h"
#include "locale.h"

double f(double x, double y);

void main()
{
	setlocale(LC_ALL, "rus");
	int x = 5, y = 2;
	printf("x = %d\r\ny = %d\r\n", x, y);
	printf("f(x,y) = %f\r\n", f(x, y));
	printf("����� �������� x:");
	scanf_s("%d", &x);
	printf("����� �������� y:");
	scanf_s("%d", &y);
	printf("f(x,y) = %f\r\n", f(x, y));

	system("pause");
	return 0;
}

double f(double x, double y)
{
	return sin(y + x) * sin(y - x);
}