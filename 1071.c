#include <stdio.h>

int main()
{
	int input1, input2, temp, sum = 0;
	scanf("%d", &input1);
	scanf("%d", &input2);

	if (input1 > input2)
	{
		temp = input1;
		input1 = input2;
		input2 = temp;
	}

	for (input1 = input1 + 1; input1 < input2; input1++)
	{
		if ((input1 % 2) == 1 || (input1 % 2) == -1)
		{
			sum += input1;
		}
	}

	printf("%d\n", sum);

	return 0;
}
