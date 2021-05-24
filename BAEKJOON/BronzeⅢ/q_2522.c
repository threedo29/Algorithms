/**
 *  Date: 2021-05-03
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2522
 *  Q_Number: 2522
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
				if (j < n - 1 - i)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			else
			{
				if (j < i - (n - 1))
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}

	return 0;
}
