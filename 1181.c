#include <stdio.h>

int main()
{
	char c;
	int i, j, line;
	float sum = 0.0, n;

	scanf("%d ", &line);
	scanf("%c", &c);

	for (i = 0; i < 12; i++)		
	{
		for (j = 0; j < 12; j++)
		{
			scanf("%f", &n);
			if (i == line)
			{
				sum += n;
			}
		}
	}

	if (c == 'S')
	{
		printf("%.1f\n", sum);
	}
	else
	{
		printf("%.1f\n", sum / 12);
	}

	return 0;
}
