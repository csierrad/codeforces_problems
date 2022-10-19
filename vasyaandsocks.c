/* 
Vasya and Socks
900
https://codeforces.com/problemset/problem/460/A
 */

#include <stdio.h>

int main(){

	int n, m, d, aux, t, total;

	scanf("%d %d", &n, &m);

	for(t = 1; n; t++, n--){
		if(t % m == 0)n++;
	}

	printf("%d\n", t - 1);

	return 0;
}