/**
 *  Date: 2021-05-07
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2108
 *  Q_Number: 2108
 */

#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b);

int main(void)
{
	int n, i;
	int sum = 0;
	int max = -4000, min = 4000;
	int *arr;
	int *cnt;

	scanf("%d", &n);
	arr = (int *)malloc(sizeof(int) * n);
	if (arr == NULL)
	{
		exit(1);
	}

	cnt = (int *)calloc(n, sizeof(int));
	if (cnt == NULL)
	{
		exit(1);
	}

	for (i = 0; i < n; i++)
	{
		scanf("%d", arr + i);
		cnt[*(arr + i)]++;
		sum += *(arr + i);
		if (*(arr + i) < min)
		{
			min = *(arr + i);
		}
		if (*(arr + i) > max)
		{
			max = *(arr + i);
		}
	}

	qsort(cnt, n, sizeof(int), compare);

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