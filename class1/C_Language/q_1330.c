/**
 *  Date: 2021-01-04
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/1330
 *  Q_Number: 1330
 */

#include <stdio.h>

int main(void)
{
    int n1 = 0, n2 = 0;

    scanf("%d %d", &n1, &n2);

    if((n1 - n2) > 0)
    {
        printf(">");
    }
    else if((n1 - n2) < 0)
    {
        printf("<");
    }
    else
    {
        printf("==");
    }    

    return 0;
}