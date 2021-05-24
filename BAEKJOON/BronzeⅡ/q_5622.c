/**
 *  Date: 2021-04-28
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/5622
 *  Q_Number: 5622
 */

#include <stdio.h>
#include <string.h>

int check_dial(char c);

int main(void)
{
    char str[15] = { '\0', };
    int i, sum = 0;

    scanf("%s", str);

    for (i = 0; i < strlen(str); i++)
    {
        sum += check_dial(str[i]);
    }

    printf("%d", sum);
    return 0;
}

int check_dial(char c)
{
    if (c >= 'A' && c <= 'C')
    {
        return 3;
    }
    else if (c <= 'F')
    {
        return 4;
    }
    else if (c <= 'I')
    {
        return 5;
    }
    else if (c <= 'L')
    {
        return 6;
    }
    else if (c <= 'O')
    {
        return 7;
    }
    else if (c <= 'S')
    {
        return 8;
    }
    else if (c <= 'V')
    {
        return 9;
    }
    else
    {
        return 10;
    }
}