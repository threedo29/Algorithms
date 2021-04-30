/**
 *  Date: 2021-04-30
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2447
 *  Q_Number: 2447
 */

#include <stdio.h>

int main(void)
{
	int n, i, j;
	// scanf("%d", &n);
	n = 5;

	for (i = 0; i < n * 2 - 1; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
