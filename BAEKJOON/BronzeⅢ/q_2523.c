/**
 *  Date: 2021-05-03
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2523
 *  Q_Number: 2523
 */

#include <stdio.h>

int main(void)
{
	int n, i, j;
	scanf("%d", &n);

	for (i = 0; i < n * 2 - 1; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i <= n - 1)
			{
				if (j <= i)
				{
					printf("*");
				}
			}
			else
			{
				if (j < i - (2 * (i - (n - 1)) - 1))
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}

	return 0;
}
