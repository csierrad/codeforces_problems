/* 
Yet Another Two Integers Problem
800
https://codeforces.com/problemset/problem/1409/A
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int t, a, b, diff;

	scanf("%d", &t);

	while(t--){
		scanf("%d %d", &a, &b);

		diff = abs(a - b);

		printf("%d\n", diff / 10 + ((diff % 10) ? 1 : 0));
	}

	return 0;
}