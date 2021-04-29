/**
 *  Date: 2021-04-29
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2448
 *  Q_Number: 2448
 */

#include <stdio.h>
#include <string.h>

char g_table[3100][6200];

void solve(int x, int y, int n);

int main(void)
{
	int n, i, j;
	scanf("%d", &n);
	memset(g_table, ' ', sizeof(g_table));

	solve(0, 0, n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n * 2 - 1); j++)
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

	if (n == 3)
	{
		g_table[x][y + 2] = '*';
		g_table[x + 1][y + 1] = '*';
		g_table[x + 1][y + 3] = '*';
		g_table[x + 2][y] = '*';
		g_table[x + 2][y + 1] = '*';
		g_table[x + 2][y + 2] = '*';
		g_table[x + 2][y + 3] = '*';
		g_table[x + 2][y + 4] = '*';
		return;
	}

	// Top
	solve(x, y + (n / 2), n / 2);
	// Left
	solve(x + (n / 2), y, n / 2);
	// Right
	solve(x + (n / 2), y + n, n / 2);
}
