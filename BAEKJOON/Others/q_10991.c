/**
 *  Date: 2021-05-03
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/10991
 *  Q_Number: 10991
 */

#include <stdio.h>

int main(void)
{
	int n, i, j;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n + i; j++)
		{
			if (n % 2 == 0)
			{
				if (i % 2 == 0)
				{
					if (j % 2 == 1 && j >= n - 1 - i)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}
				else
				{
					if (j % 2 == 0 && j >= n - 1 - i)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}
			}
			else
			{
				if (i % 2 == 0)
				{
					if (j % 2 == 0 && j >= n - 1 - i)
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}
				else
				{
					if (j % 2 == 1 && j >= n - 1 - i)
					{
						printf("*");
					}
					else
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
