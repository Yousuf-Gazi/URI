#include <stdio.h>

int main ()
{
	double R, pi = 3.14159, volume;
	scanf("%lf", &R);

	volume = (4 / 3.0) * pi * (R * R * R);
	printf("VOLUME = %0.3lf\n", volume);

	return 0;
}
