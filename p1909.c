#include <stdio.h>

int main(void)
{
	int n, i, min = 100000000;
	int num[3], pri[3], mon[3];
	scanf("%d", &n);
	for(i = 0; i < 3; i++)
	{
		scanf("%d %d", &num[i], &pri[i]);
	}
	for(i = 0; i < 3; i++)
	{
		mon[i] = (n % num[i] == 0 ? n / num[i] : n / num[i] + 1) * pri[i];
		if(mon[i] < min)
			min = mon[i];
	}
	printf("%d", min);
	return 0;
}
