/**
 *  Date: 2021-04-27
 *  Author: threedo29
 *  URL: https://www.acmicpc.net/problem/11654
 *  Q_Number: 11654
 */

long long sum(int *a, int n) {
	long long ans = 0;
    int i;
    
    for(i = 0; i < n; i++)
    {
        ans += a[i];
    }
    
	return ans;
}
