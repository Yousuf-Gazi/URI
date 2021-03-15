#include <stdio.h>

int main ()
{
	double salary, sell, total;
	char name[30];
	scanf("%s", name);
	scanf("%lf %lf", &salary, &sell);

	total = salary + ((15 * sell) / 100);
	printf("TOTAL = R$ %0.2lf\n", total);

	return 0;
}
