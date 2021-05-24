/**
 *  Date: 2021-04-29
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/10872
 *  Q_Number: 10872
 */

#include <stdio.h>

unsigned int factorial(unsigned int fac);

int main(void)
{
	unsigned int n;
	scanf("%d", &n);

	printf("%d", factorial(n));
	return 0;
}

unsigned int factorial(unsigned int fac)
{
	if (fac == 0)
	{
		return 1;
	}
	else
	{
		return fac * factorial(fac - 1);
	}
}