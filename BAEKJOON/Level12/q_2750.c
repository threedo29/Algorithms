/**
 *  Date: 2021-05-07
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2750
 *  Q_Number: 2750
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE	1000

int compare(const void* a, const void* b);

int main(void)
{
	int n, arr[MAX_SIZE] = { 0, }, i;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
	}

	qsort(arr, n, sizeof(int), compare);

	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}

int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2)
	{
		return -1;
	}

	if (num1 > num2)
	{
		return 1;
	}

	return 0;
}