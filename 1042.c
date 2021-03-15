#include <stdio.h>

int main()
{
	int num1, num2, num3, temp, a, b, c;
	scanf("%d %d %d", &num1, &num2, &num3);
	a = num1;
       	b = num2;
	c = num3;
	
	if (num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num1 > num3)
	{
		temp = num1;
		num1 = num3;
		num3 = temp;
	}
	if (num2 > num3)
	{
		temp = num2;
		num2 = num3;
		num3 = temp;
	}
	printf("%d\n%d\n%d\n", num1, num2, num3);
	printf("\n");
	printf("%d\n%d\n%d\n", a, b, c);

	return 0;
}
