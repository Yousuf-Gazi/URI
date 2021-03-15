#include <stdio.h>

int main()
{
	int num, odd, i;
	scanf("%d", &num);

	for (i = num; i < num + 12; i++)
	{
		if ((i % 2) == 1)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}
