/**
 *  Date: 2021-04-27
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/3052
 *  Q_Number: 3052
 */

#include <stdio.h>

int main(void)
{
    int arr[42] = {0,};
    int i, n, cnt = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        arr[n % 42]++;
    }

    for (i = 0; i < 42; i++)
    {
        if (arr[i] != 0)
        {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}
