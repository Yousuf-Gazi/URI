#include <stdio.h>

int main()
{
	int t, n, i, j;
	long long int arr[60];

	arr[0] = 0;
	arr[1] = 1;
	for (i = 2; i < 60; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf("%d", &n);
		printf("Fib(%d) = %lld\n", n, arr[n]);
	}

	return 0;
}
