#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, discriminant, r1, r2;
	scanf("%lf %lf %lf", &a, &b, &c);

	discriminant = b * b - 4 * a * c;
	r1 = (- b + sqrt(discriminant)) / (2 * a);
	r2 = (- b - sqrt(discriminant)) / (2 * a);
	if (a != 0 && discriminant > 0)
	{
		printf("R1 = %0.5lf\nR2 = %0.5lf\n", r1, r2);
	}
	else
	{
		printf("Impossivel calcular\n");
	}

	return 0;
}
