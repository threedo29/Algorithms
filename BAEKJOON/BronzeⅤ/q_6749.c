/**
 *  Date: 2021-05-11
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/6749
 *  Q_Number: 6749
 */

#include <stdio.h>

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d", m + (m - n));
	return 0;
}