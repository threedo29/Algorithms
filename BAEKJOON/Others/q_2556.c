/**
 *  Date: 2021-05-03
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2556
 *  Q_Number: 2556
 */

#include <stdio.h>

int main(void)
{
	int n, i, j;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
