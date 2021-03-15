#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, major_ab, major;
	scanf("%d %d %d", &a, &b, &c);

	major_ab = (a + b + abs(a - b)) / 2;
	major = (major_ab + c + abs(major_ab - c)) / 2;
	printf("%d eh o maior\n", major);

	return 0;
}
