#include <stdio.h>

int main()
{
	int input, par[5], par_pos = 0, impar[5], impar_pos =0, i, j, k, l;		//par_pos = par position & impar_pos = impar position
	for (i = 0; i < 15; i++)
	{
		scanf("%d", &input);

		//for even
		if ((input % 2) == 0)
		{
			par[par_pos] = input;
			par_pos++;
			if (par_pos == 5)
			{
				for (j = 0; j < 5; j++)
				{
					printf("par[%d] = %d\n", j, par[j]);
					par_pos = 0;		//to print par[5] again
					par[j] = 0;		//to empty par[5] for storing again
				}
			}
		}
		//for odd
		else
		{
			impar[impar_pos] = input;
			impar_pos++;
			if (impar_pos == 5)
			{
				for (k = 0; k < 5; k++)
				{
					printf("impar[%d] = %d\n", k, impar[k]);
					impar_pos = 0;		//to print imparpar[5] again
					impar[k] = 0;		//to empty impar[5] for storing again
				}
			}
		}

	}
	//for odd according to question
	for (l = 0; l < 5; l++)
	{
		if (impar[l] == 0)
		{
			break;
		}
		printf("impar[%d] = %d\n", l, impar[l]);
	}
	//for even according to question
	for (l = 0; l < 5; l++)
	{
		if (par[l] == 0)
		{
			break;
		}
		printf("par[%d] = %d\n", l, par[l]);
	}

	return 0;
}
