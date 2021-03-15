#include <stdio.h>

int main()
{
	unsigned int x, hun, fif, twen, ten, fiv, two, one;
	scanf("%u", &x);

	hun = x / 100;
	fif = (x % 100) / 50;
	twen = ((x % 100) % 50) / 20;
	ten = (((x % 100) % 50) % 20) / 10;
	fiv = ((((x % 100) % 50) % 20) % 10) / 5;
	two = (((((x % 100) % 50) % 20) % 10) % 5) / 2;
	one = ((((((x % 100) % 50) % 20) % 10) % 5) % 2) / 1;
	printf("%u\n", x);
	printf("%u nota(s) de R$ 100,00\n", hun);
	printf("%u nota(s) de R$ 50,00\n", fif);
	printf("%u nota(s) de R$ 20,00\n", twen);
	printf("%u nota(s) de R$ 10,00\n", ten);
	printf("%u nota(s) de R$ 5,00\n", fiv);
	printf("%u nota(s) de R$ 2,00\n", two);
	printf("%u nota(s) de R$ 1,00\n", one);
	
	return 0;
}
