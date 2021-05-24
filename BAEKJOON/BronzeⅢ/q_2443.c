/**
 *  Date: 2021-04-30
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2443
 *  Q_Number: 2443
 */

#include <stdio.h>

int main(void)
{
	int n, i, j;
	scanf("%d", &n);

	for (i = n; i > 0; i--)
	{
		for (j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < (i * 2) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
