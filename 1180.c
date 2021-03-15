#include <stdio.h>

int main()
{
	int n, i, min, pos;
	scanf("%d", &n);
	int arr[n];

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	min = arr[0];
	for (i = 1; i < n; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
			pos = i;
		}
	}

	printf("Menor valor: %d\n", min);
	printf("Posicao: %d\n", pos);

	return 0;
}
