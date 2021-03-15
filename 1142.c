#include <stdio.h>

int main()
{
	int n, i, pum = 1;
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("%d %d %d PUM\n", pum, pum + 1, pum + 2);
		pum += 4;
	}
	return 0;
}
