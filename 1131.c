#include <stdio.h>

int main()
{
	int inter, gremio, new_game, draw = 0, i = 0, inter_w = 0, gremio_w = 0;

	while (1)
	{
		scanf("%d %d", &inter, &gremio);
		i++;

		if (inter > gremio)
		{
			inter_w++;
		}
		else if (inter < gremio)
		{
			gremio_w++;
		}
		else
		{
			draw++;
		}

		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &new_game);
		if (new_game == 1)
		{
			continue;
		}
		else if (new_game == 2)
		{
			break;
		}
	}

	printf("%d grenais\n", i);
	printf("Inter:%d\n", inter);
	printf("Gremio:%d\n", gremio);
	printf("Empates:%d\n", draw);

	if (inter_w > gremio_w)
	{
		printf("Inter venceu mais\n");
	}
	else if (inter_w < gremio_w)
	{
		printf("Gremio venceu mais\n");
	}
	else
	{
		printf("Não houve vencedor\n");
	}

	return 0;
}
