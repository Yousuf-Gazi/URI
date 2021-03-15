#include <stdio.h>

int main()
{
	int initial_hour, initial_min, final_hour, final_min, duration_hour, duration_min;
	scanf("%d %d %d %d", &initial_hour, &initial_min, &final_hour, &final_min);

	if (initial_hour == final_hour && initial_min == final_min)
	{
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
	else if (initial_hour < final_hour)
	{
		duration_hour = final_hour - initial_hour;

		if (initial_min < final_min)
		{
			duration_min = final_min - initial_min;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_min);
		}
		else if (initial_min > final_min)
		{
			duration_min = (final_min - initial_min) + 60;
			duration_hour--;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_min);
		}
	}
	else if (initial_hour > final_hour)
	{
		duration_hour = (final_hour - initial_hour) + 24;

		if (initial_min < final_min)
		{
			duration_min = (final_min - initial_min);
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_min);
		}
		else if (initial_min > final_min)
		{
			duration_min = (final_min - initial_min) + 60;
			duration_hour--;
			printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_min);
		}
	}

	return 0;
}
