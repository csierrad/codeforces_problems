/* 
New Year's Number
900
https://codeforces.com/problemset/problem/1475/B
 */

#include <stdio.h>

int main(){

	int n, t;

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);

		printf("%s\n", (n % 2020 <= n / 2020) ? "YES" : "NO");
	}

	return 0;
}