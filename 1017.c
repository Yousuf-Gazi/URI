#include <stdio.h>

int main()
{
	int t, d, v;
	float l;
	scanf("%d %d", &t, &v);

	d = v * t;
	l = d / 12.0;
	printf("%0.3f\n", l);

	return 0;
}
