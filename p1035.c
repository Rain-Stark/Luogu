#include <stdio.h>

int main(void)
{
	double sn = 0.0;
	int k;
	double n = 1.0;
	scanf("%d", &k);
	while (sn <= k)
	{
		sn = sn + 1.0 / n;
		n = n + 1.0;
	}
	printf("%d", (int)(n - 1.0));
	return 0;
}
