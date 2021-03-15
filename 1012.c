#include <stdio.h>

int main ()
{
	double A, B, C, pi = 3.14159, triangle, circle, trapezium, square, rectangle;
	scanf("%lf %lf %lf", &A, &B, &C);

	triangle = (A * C) / 2;
	circle = pi * (C * C);
	trapezium = ((A + B) / 2) * C;
	square = B * B;
	rectangle = A * B;
	printf("TRIANGULO: %0.3lf\nCIRCULO: %0.3lf\nTRAPEZIO: %0.3lf\nQUADRADO: %0.3lf\nRETANGULO: %0.3lf\n", triangle, circle, trapezium, square, rectangle);

	return 0;
}
