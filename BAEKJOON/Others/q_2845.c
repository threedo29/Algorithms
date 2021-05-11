/**
 *  Date: 2021-05-11
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2845
 *  Q_Number: 2845
 */

#include <stdio.h>

int main(void)
{
    int n, m, i, num, comp;
    scanf("%d %d", &n, &m);
    comp = n * m;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        printf("%d ", comp - num);
    }
    return 0;
}
