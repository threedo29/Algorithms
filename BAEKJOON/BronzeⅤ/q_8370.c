/**
 *  Date: 2021-05-11
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/8370
 *  Q_Number: 8370
 */

#include <stdio.h>

int main(void)
{
	int n, m, sum = 0;
	scanf("%d %d", &n, &m);
	sum = n * m;
	scanf("%d %d", &n, &m);
	sum += (n * m);
	printf("%d", sum);
	return 0;
}