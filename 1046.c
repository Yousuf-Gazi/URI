#include <stdio.h>

int main()
{
	int start_time, end_time, duration;
	scanf("%d %d", &start_time, &end_time);

	if (start_time == end_time)
	{
		duration = 24;
		printf("O JOGO DUROU %d HORA(S)\n", duration);
	}
	else if (start_time < end_time)
	{
		duration = end_time - start_time;
		printf("O JOGO DUROU %d HORA(S)\n", duration);
	}
	else if (start_time > end_time)
	{
		duration = (end_time - start_time) + 24;
		printf("O JOGO DUROU %d HORA(S)\n", duration);
	}

	return 0;
}
