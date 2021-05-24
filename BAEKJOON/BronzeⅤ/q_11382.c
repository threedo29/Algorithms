/**
 *  Date: 2021-05-11
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/11382
 *  Q_Number: 11382
 */

#include <stdio.h>

int main(void)
{
	int i;
	unsigned long long n, sum = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%lld", &n);
		sum += n;
	}
	printf("%lld", sum);
	return 0;
}