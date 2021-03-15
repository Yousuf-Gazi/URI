#include <stdio.h>

int main()
{
	int even_num = 2;

	for (even_num = 2; even_num <= 100; even_num++)
	{
		if ((even_num % 2) == 0)
		{
			printf("%d\n", even_num);
		}
	}

	return 0;
}
