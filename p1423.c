#include <stdio.h>

int main(void)
{
	double x, dist, last;
	scanf("%lf", &x);
	last = 2.0;
	dist = 0.0;
	int n = 0;
	while (dist < x)
	{
		dist += last;
		last = last * 0.98;
		n++;
	}
	printf("%d", n);
	return 0;
}
