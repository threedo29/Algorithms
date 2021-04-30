/**
 *  Date: 2021-04-30
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2442
 *  Q_Number: 2442
 */

#include <stdio.h>

int main(void)
{
	int n, i, j;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
