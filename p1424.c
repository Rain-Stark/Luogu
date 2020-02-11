#include <stdio.h>

int main(void)
{
	int x, n, dist = 0;
	scanf("%d %d", &x, &n);
	while (n > 0)
	{
		if (x != 6 && x != 7)
			dist += 250;
		if (x != 7)
			x++;
		else
			x = 1;
		n--;
	}
	printf("%d", dist);
	return 0;
}
