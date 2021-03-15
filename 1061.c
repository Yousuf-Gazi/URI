#include <stdio.h>

int main()
{
	int start_day, end_day, start_hr, end_hr, start_min, end_min, start_sec, end_sec, dur_day, dur_hr, dur_min, dur_sec;
	scanf("Dia %d", &start_day);
	scanf("%d : %d : %d\n", &start_hr, &start_min, &start_sec);
	scanf("Dia %d", &end_day);
	scanf("%d : %d : %d", &end_hr, &end_min, &end_sec);

	dur_sec = end_sec - start_sec;
	dur_min = end_min - start_min;
	dur_hr = end_hr - start_hr;
	dur_day = end_day - start_day;

	if (dur_sec < 0)
	{
		dur_sec = dur_sec + 60;
		dur_min --;
	}

	if (dur_min < 0)
	{
		dur_min = dur_min + 60;
		dur_hr--;
	}

	if (dur_hr < 0)
	{
		dur_hr = dur_hr + 24;
		dur_day--;
	}

	printf("%d dia(s)\n", dur_day);
	printf("%d hora(s)\n", dur_hr);
	printf("%d minuto(s)\n", dur_min);
	printf("%d segundo(s)\n", dur_sec);

	return 0;
}
