/**
 *  Date: 2021-04-27
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/2675
 *  Q_Number: 2675
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, m;
    char str[20] = { '\0', };
    int i, j;

    scanf("%d", &n);

    while (n--)
    {
        memset(str, '\0', 20);
        scanf("%d", &m);
        scanf("%s", str);

        for (i = 0; i < strlen(str); i++)
        {
            for (j = 0; j < m; j++)
            {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }

    return 0;
}