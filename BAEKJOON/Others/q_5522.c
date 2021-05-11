/**
 *  Date: 2021-05-11
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/5522
 *  Q_Number: 5522
 */

#include <stdio.h>

int main(void)
{
	int n, sum = 0, i;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &n);
		sum += n;
	}
	printf("%d", n);
	return 0;
}