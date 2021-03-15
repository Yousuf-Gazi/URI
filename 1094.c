#include <stdio.h>

int main()
{
	int N, animal_num, i, total_animal = 0, C = 0, R = 0, S = 0;
	char animal_char;
	float per_c, per_r, per_s;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d %c", &animal_num, &animal_char);
		total_animal += animal_num;

		if (animal_char == 'C')
		{
			C += animal_num;
		}
		else if (animal_char == 'R')
		{
			R += animal_num;
		}
		else if (animal_char == 'S')
		{
			S += animal_num;
		}
	}

	per_c = (C * 100.00) / total_animal;
	per_r = (R * 100.00) / total_animal;
	per_s = (S * 100.00) / total_animal;

	printf("Total: %d cobaias\n", total_animal);
	printf("Total de coelhos: %d\n", C);
	printf("Total de ratos: %d\n", R);
	printf("Total de sapos: %d\n", S);
	printf("Percentual de coelhos: %.2f %%\n", per_c);
	printf("Percentual de ratos: %.2f %%\n", per_r);
	printf("Percentual de sapos: %.2f %%\n", per_s);

	return 0;
}
