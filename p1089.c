#include <stdio.h>

int main(void)
{
	int y[12], i, mon = 0, mot = 0;
	for(i = 0; i < 12; i++)
	{
		mon+=300;
		scanf("%d", &y[i]);
		if(y[i] > mon)
		{
			printf("-%d", i + 1);
			break;
		}
		else
		{
			mon-=y[i];
			mot+=(mon - mon % 100);
			mon = mon % 100;
		}
	}
	if(i == 12)
		printf("%d", mon + mot + mot / 5);
	return 0;
}
