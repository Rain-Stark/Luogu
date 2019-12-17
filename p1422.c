#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	double fee;
	if (n <= 150)
	{
		fee = n * 0.4463;
	}
	else if (n <= 400)
	{
		fee = 150 * 0.4463 + (n - 150)*0.4663;
	}
	else
	{
		fee = 150 * 0.4463 + 250 * 0.4663 + (n - 400)*0.5663;
	}
	printf("%.1lf", fee);
	return 0;
}
