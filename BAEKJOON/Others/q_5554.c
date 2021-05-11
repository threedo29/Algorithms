/**
 *  Date: 2021-05-11
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/5554
 *  Q_Number: 5554
 */

#include <stdio.h>

int main(void)
{
	int n, i, sum = 0;
	for (i = 0; i < 4; i++)
	{
		scanf("%d", &n);
		sum += n;
	}
	printf("%d\n%d", (sum / 60), (sum % 60));
	return 0;
}