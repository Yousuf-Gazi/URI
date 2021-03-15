#include <stdio.h>

int main()
{
	int N, i;
	float input1, input2, input3, wt_avg;
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%f %f %f", &input1, &input2, &input3);
		wt_avg = ((input1 * 2) + (input2 * 3) + (input3 * 5)) / 10;

		printf("%.1f\n", wt_avg);
	}

	return 0;
}
