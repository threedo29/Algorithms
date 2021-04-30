/**
 *  Date: 2021-04-30
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2446
 *  Q_Number: 2446
 */

#include <stdio.h>

int main(void)
{
	int n, i, j;
	scanf("%d", &n);

	for (i = 0; i < (n * 2) - 1; i++)
	{
		for (j = 0; j < (n * 2) - 1; j++)
		{
			if (i < n)
			{
				if (j >= i && j < (n * 2) - i - 1)
				{
					printf("*");
				}
				else
				{
					if (j < i)
					{
						printf(" ");
					}
				}
			}
			else
			{
				if (j <= i && j >= (2 * n) - i - 2)
				{
					printf("*");
				}
				else
				{
					if (j < i)
					{
						printf(" ");
					}
				}
			}
		}
		printf("\n");
	}
	return 0;
}
