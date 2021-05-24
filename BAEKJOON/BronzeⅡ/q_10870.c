/**
 *  Date: 2021-04-29
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/10870
 *  Q_Number: 10870
 */

#include <stdio.h>

unsigned int fibonacci(unsigned int fibo);

int main(void)
{
	unsigned int n;
	scanf("%d", &n);

	printf("%d", fibonacci(n));
	return 0;
}

unsigned int fibonacci(unsigned int fibo)
{
	if (fibo == 0)
	{
		return 0;
	}
	else if (fibo == 1 || fibo == 2)
	{
		return 1;
	}
	else
	{
		return fibonacci(fibo - 1) + fibonacci(fibo - 2);
	}
}