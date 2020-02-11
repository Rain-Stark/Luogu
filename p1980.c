#include <stdio.h>

int main(void)
{
	int n, x, times = 0, i;
	int w1, w2, w3, w4, w5, w6, w7;
	scanf("%d %d", &n, &x);
	for (i = 1; i <= n; i++)
	{
		if (i < 10)
		{
			w1 = i % 10;
			if (w1 == x)
				times++;
		}
		else if (i < 100)
		{
			w1 = i % 10;
			w2 = (i / 10) % 10;
			if (w1 == x)
				times++;
			if (w2 == x)
				times++;
		}
		else if (i < 1000)
		{
			w1 = i % 10;
			w2 = (i / 10) % 10;
			w3 = (i / 100) % 10;
			if (w1 == x)
				times++;
			if (w2 == x)
				times++;
			if (w3 == x)
				times++;
		}
		else if (i < 10000)
		{
			w1 = i % 10;
			w2 = (i / 10) % 10;
			w3 = (i / 100) % 10;
			w4 = (i / 1000) % 10;
			if (w1 == x)
				times++;
			if (w2 == x)
				times++;
			if (w3 == x)
				times++;
			if (w4 == x)
				times++;
		}
		else if (i < 100000)
		{
			w1 = i % 10;
			w2 = (i / 10) % 10;
			w3 = (i / 100) % 10;
			w4 = (i / 1000) % 10;
			w5 = (i / 10000) % 10;
			if (w1 == x)
				times++;
			if (w2 == x)
				times++;
			if (w3 == x)
				times++;
			if (w4 == x)
				times++;
			if (w5 == x)
				times++;
		}
		else if (i < 1000000)
		{
			w1 = i % 10;
			w2 = (i / 10) % 10;
			w3 = (i / 100) % 10;
			w4 = (i / 1000) % 10;
			w5 = (i / 10000) % 10;
			w6 = (i / 100000) % 10;
			if (w1 == x)
				times++;
			if (w2 == x)
				times++;
			if (w3 == x)
				times++;
			if (w4 == x)
				times++;
			if (w5 == x)
				times++;
			if (w6 == x)
				times++;
		}
		else if (i < 10000000)
		{
			w1 = i % 10;
			w2 = (i / 10) % 10;
			w3 = (i / 100) % 10;
			w4 = (i / 1000) % 10;
			w5 = (i / 10000) % 10;
			w6 = (i / 100000) % 10;
			w7 = (i / 1000000) % 10;
			if (w1 == x)
				times++;
			if (w2 == x)
				times++;
			if (w3 == x)
				times++;
			if (w4 == x)
				times++;
			if (w5 == x)
				times++;
			if (w6 == x)
				times++;
			if (w7 == x)
				times++;
		}
	}
	printf("%d", times);
	return 0;
}
