#include <stdio.h>

int main()
{
	unsigned int s, hour, min, sec;
	scanf("%u", &s);

	hour = s / 3600;
	min = (s % 3600) / 60;
	sec = (s % 3600) % 60;
	printf("%u:%u:%u\n", hour, min, sec);
	
	return 0;
}
