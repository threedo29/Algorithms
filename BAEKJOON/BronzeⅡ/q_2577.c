/**
 *  Date: 2021-04-27
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2577
 *  Q_Number: 2577
 */

#include <stdio.h>

int main(void)
{
    int n, multi = 1;
    int i;
    int arr[10] = {0,};

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &n);
        multi *= n;
    }

    while (multi != 0)
    {
        arr[(multi % 10)]++;
        multi /= 10;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
