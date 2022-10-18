#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES 
#define M_PI 3.14159265358979323846
void main()
{
	/*int  x;
	setlocale(LC_ALL, "RUS");
	puts("¬ведите x");
	scanf("%d", &x);
	if (x <= -3)
		printf(" F(x) = %d", 9);
	if (x > -3)
		printf("F(x) = %lf", 1 / (pow(x, 2) + 1));*/
	int  c;
	double x, y, a, res1, res2;
	c = 2, a = 7.1e-9;
	setlocale(LC_ALL, "RUS");
	puts("¬ведите x ");
	scanf("%lf", &x);
	puts("¬ведите y ");
	scanf("%lf", &y);
	res1 = pow(a, 5) + pow(sin(y - c), 4);
	res2 = pow(sin(x + y), 3) + fabs(x - y);
	printf(" «начение F = %lf", res1 / res2);
	
}