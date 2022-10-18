#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846
void main()
{
	int  x;
	setlocale(LC_ALL, "RUS");
	puts("Введите x");
	scanf("%d", &x);
	if (x <= -3)
		printf(" F(x) = %d", 9);
	if (x > -3)
		printf("F(x) = %lf", 1 / (pow(x, 2) + 1));
	
}
