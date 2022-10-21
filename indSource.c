#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

void main()
{
	int x; 
	setlocale(LC_ALL, "RUS");
	puts("Введите число от 1 до 90");
	scanf("%d", &x);
	if (x == 1 || x == 21 || x == 31 || x == 41 || x == 51 || x == 61 || x == 71 || x == 81)
		printf("%d копейка", x);
	else if (x == 2 || x == 3 || x == 4 || x == 22 || x == 23 || x == 24 || x == 32 || x == 33 || x == 34 || x == 42 || x == 43 || x == 44 \
		|| x == 52 || x == 53 || x == 54 || x == 62 || x == 63 || x == 64 || x == 72 || x == 73 || x == 74 || x == 82 || x == 83 || x == 84)
		printf("%d копейки", x);
	else if (x >= 5 && x <= 20 || x >= 25 && x <= 30 || x >= 35 && x <= 40 || x >= 45 && x <= 50 || x >= 55 && x <= 60 || x >= 65 && x <= 70 \
		|| x >= 75 && x <= 80 || x >= 85 && x <= 90)
		printf("%d копеек", x);

}
