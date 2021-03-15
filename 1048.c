#include <stdio.h>

int main()
{
	float increased_salary, increased_percentual, salary;
	scanf("%f", &salary);

	if (salary >= 0 && salary <= 400.00)
	{
		increased_salary = 1.15 * salary;
		increased_percentual = 0.15 * salary;

		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", increased_salary, increased_percentual);
	}
	else if (salary >= 400.01 && salary <= 800.00)
	{
		increased_salary = 1.12 * salary;
		increased_percentual = 0.12 * salary;

		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", increased_salary, increased_percentual);
	}
	else if (salary >= 800.01 && salary <= 1200.00)
	{
		increased_salary = 1.10 * salary;
		increased_percentual = 0.10 * salary;

		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", increased_salary, increased_percentual);
	}
	else if (salary >= 1200.01 && salary <= 2000.00)
	{
		increased_salary = 1.07 * salary;
		increased_percentual = 0.07 * salary;

		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", increased_salary, increased_percentual);
	}
	else if (salary > 2000.00)
	{
		increased_salary = 1.04 * salary;
		increased_percentual = 0.04 * salary;

		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", increased_salary, increased_percentual);
	}

	return 0;
}
