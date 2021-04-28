/**
 *  Date: 2021-04-28
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/11654
 *  Q_Number: 11654
 */

#include <stdio.h>

int main(void)
{
    char str1[4] = { '\0', };
    char str2[4] = { '\0', };
    int n1, n2;

    scanf("%s", str1);
    scanf("%s", str2);

    n1 = (str1[0] - 48) + ((str1[1] - 48) * 10) + ((str1[2] - 48) * 100);
    n2 = (str2[0] - 48) + ((str2[1] - 48) * 10) + ((str2[2] - 48) * 100);

    if (n1 > n2)
    {
        printf("%d", n1);
    }
    else
    {
        printf("%d", n2);
    }

    return 0;
}