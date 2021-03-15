#include <stdio.h>

int main ()
{
	int num, hour;
	float salary_per_hour, end_month_salary;
	scanf("%d %d %f", &num, &hour, &salary_per_hour);

	end_month_salary = hour * salary_per_hour;
	printf("NUMBER = %d\nSALARY = U$ %0.2f\n", num, end_month_salary);

	return 0;

}
