/**
 *  Date: 2021-04-23
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/14681
 *  Q_Number: 14681
 */
#include <stdio.h>

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    if (x < 0) // 2��, 3��
    {
        if (y < 0)
        {
            printf("3");
        }
        else
        {
            printf("2");
        }
    }
    else // 1��, 4��
    {
        if (y < 0)
        {
            printf("4");
        }
        else
        {
            printf("1");
        }
    }

    return 0;
}