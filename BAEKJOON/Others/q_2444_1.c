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

	for (i = 0; i < n; i++)
	{
		for (j = i; j < n-1; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = n-2; i >= 0; i--)
	{
		for (j = i; j < n-1; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}