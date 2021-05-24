/**
 *  Date: 2021-04-23
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/1110
 *  Q_Number: 1110
 */

#include <stdio.h>

int main(void)
{
    int n, cnt = 0, ori;
    int result = 0, temp = 0;

    scanf("%d", &n);
    ori = n;
    do
    {
        temp = (int)(n / 10) + (n % 10);
        result = ((n % 10) * 10) + (temp % 10);
        n = result;
        cnt++;
    } while (result != ori);

    printf("%d", cnt);

    return 0;
}