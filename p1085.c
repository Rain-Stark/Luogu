#include <stdio.h>

int main(void)
{
	int i, max = 0;
	int sch[7], mot[7];
	int hap[7];
	for (i = 0; i < 7; i++)
	{
		scanf("%d %d", &sch[i], &mot[i]);
		if ((sch[i] + mot[i]) > 8)
			hap[i] = sch[i] + mot[i] - 8;
		else
			hap[i] = 0;
		if (hap[i] > max)
			max = hap[i];
	}
	if (!max)
		printf("0");
	else
		for (i = 0; i < 7; i++)
			if (hap[i] == max)
				printf("%d", i + 1);
	return 0;
}