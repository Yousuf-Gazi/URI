#include <stdio.h>

int main()
{
	int initial_hour, final_hour, initial_min, final_min, duration_hour, duration_min;
	scanf("%d %d %d %d", &initial_hour, &initial_min, &final_hour, &final_min);

	duration_hour = final_hour - initial_hour;
	if (duration_hour < 0)
	{
		duration_hour = 24 + duration_hour;
	}

	duration_min = final_min - initial_min;
	if (duration_min < 0)
	{
		duration_min = 60 + duration_min;
		duration_hour--;
		if (duration_hour < 0)
		{
			duration_hour = 24 + duration_hour;
		}
	}

	if (initial_hour == final_hour && initial_min == final_min)
	{
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
	else
	{
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_hour, duration_min);
	}
	return 0;
}
