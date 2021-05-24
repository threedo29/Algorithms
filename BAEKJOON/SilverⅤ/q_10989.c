/**
 *  Date: 2021-05-07
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/10989
 *  Q_Number: 10989
 */

#include <stdio.h>

#define MAX_NUM 10000

int main(void)
{
	int n, m, i, j;
	int cnt[MAX_NUM + 1] = { 0, };
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &m);
		cnt[m]++;
	}

	for (i = 0; i <= MAX_NUM + 1; i++)
	{
		if (cnt[i] != 0)
		{
			for (j = 0; j < cnt[i]; j++)
			{
				printf("%d\n", i);
			}
		}
	}

	return 0;
}