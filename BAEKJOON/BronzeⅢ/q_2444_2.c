/**
 *  Date: 2021-04-30
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2444
 *  Q_Number: 2444
 */

#include <stdio.h>

int main(void)
{
	int n, i, j;

	scanf("%d", &n);

	for (i = 0; i < ((2 * n) - 1); i++)
	{
		for (j = 0; j < ((2 * n) - 1); j++)
		{
			if (i < (((2 * n) - 1) / 2))
			{
				if (j < (((2 * n) - 1) / 2) - i || j > (((2 * n) - 1) / 2) + i)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
			else if (i == (((2 * n) - 1) / 2))
			{
				printf("*");
			}
			else
			{
				if (j < i - (((2 * n) - 1) / 2) || j >= ((2 * n) - 1) - (i - (((2 * n) - 1) / 2)))
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