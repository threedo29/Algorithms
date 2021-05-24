/**
 *  Date: 2021-04-27
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/8958
 *  Q_Number: 8958
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, i;
    int score = 0, sum = 0;
    char str[80] = { '\0', };

    scanf("%d", &n);

    while (n--)
    {
        scanf("%s", str);

        score = 0;
        sum = 0;
        for (i = 0; i < strlen(str); i++)
        {
            if (str[i] == 'O')
            {
                score += 1;
                sum += score;
            }
            else
            {
                score = 0;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}
