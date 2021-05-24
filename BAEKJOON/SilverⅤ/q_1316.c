/**
 *  Date: 2021-04-29
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/1316
 *  Q_Number: 1316
 */

#include <stdio.h>
#include <string.h>

int is_group_word(char* p_str);

int main(void)
{
	int result = 0;
	int loop_cnt;
	char str[101] = { '\0', };

	scanf("%d", &loop_cnt);

	while (loop_cnt--)
	{
		scanf("%s", str);
		result += is_group_word(str);
		memset(str, '\0', 101);
	}

	printf("%d", result);
	return 0;
}

int is_group_word(char* p_str)
{
	char compare[26] = { '\0', };
	int compare_size = 0;
	char last = '\0';
	int i, j;
	int str_cnt = strlen(p_str);

	compare[compare_size++] = p_str[0];
	last = p_str[0];

	for (i = 1; i < str_cnt; i++)
	{
		if (p_str[i] == last)
		{
			continue;
		}

		for (j = 0; j < compare_size; j++)
		{
			if (compare[j] == p_str[i])
			{
				return 0;
			}
		}

		last = p_str[i];
		compare[compare_size++] = p_str[i];
	}

	return 1;
}
