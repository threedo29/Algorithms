/**
 *  Date: 2021-04-29
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2447
 *  Q_Number: 2447
 */

#include <stdio.h>
#include <string.h>

char g_table[2200][2200];

void solve(int x, int y, int n);

int main(void)
{
	int n, i, j;
	scanf("%d", &n);
	memset(g_table, ' ', sizeof(g_table));

	solve(0, 0, n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%c", g_table[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void solve(int x, int y, int n)
{
	int i, j;
	if (n == 1)
	{
		g_table[x][y] = '*';
		return;
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i != 1 || j != 1)
			{
				solve((x + ((n / 3) * i)), (y + ((n / 3) * j)), (n / 3));
			}
		}
	}
}
