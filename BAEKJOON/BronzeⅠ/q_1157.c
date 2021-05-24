/**
 *  Date: 2021-01-03
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/1157
 *  Q_Number: 1157
 */

#include <stdio.h>

#define MAX_WORD_SIZE 1000000

int main(void)
{
    int alphabet[26] = {0,};
    char word[MAX_WORD_SIZE + 1] = {'\0',};
    int i = 0, max_index = 0;
    int max_value = 0;
    int max_count = 0;

    fgets(word, MAX_WORD_SIZE, stdin);

    // 'A' => 65
    // 'a' => 97
    for(i = 0; i < MAX_WORD_SIZE; i++)
    {
        if(word[i] == '\0')
        {
            break;
        }
        if(word[i] >= 'a') // 'a' to 'z', lower case
        {
            alphabet[(word[i]-'a')] += 1;
        }
        else // 'A' to 'Z', upper case
        {
            alphabet[(word[i] - 'A')] += 1;
        }
    }

    max_value = alphabet[0];
    for(i = 0; i < 26; i++)
    {
        if(alphabet[i] != 0)
        {
            if(alphabet[i] > max_value)
            {
                max_value = alphabet[i];
                max_index = i;
            }
        }
    }

    for(i = 0; i < 26; i++)
    {
        if(alphabet[i] == max_value)
        {
            max_count += 1;
        }
    }

    if(max_count > 1)
    {
        printf("%c", '?');
    }
    else
    {
        printf("%c", (65 + max_index));
    }
    
    return 0;
}