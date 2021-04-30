/**
 *  Date: 2021-04-30
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2445
 *  Q_Number: 2445
 */

#include <stdio.h>

int main(void)
{
	int n, i, j;
	scanf("%d", &n);

	for (i = 0; i < n * 2; i++)
	{
		for (j = 0; j < n * 2; j++)
		{
			if (i < n - 1)
			{
				if (j < i + 1 || j >= n * 2 - i - 1)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			else if (i == n - 1)
			{
				printf("*");
			}
			else
			{
				if (j < (n * 2) - i - 1 || j > i)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	return 0;
}
