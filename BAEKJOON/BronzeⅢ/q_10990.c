/**
 *  Date: 2021-05-03
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/10990
 *  Q_Number: 10990
 */

#include <stdio.h>

int main(void)
{
	int n, i, j;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i + n; j++)
		{
			if (j == (n - 1) - i || j == i + (n - 1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}
