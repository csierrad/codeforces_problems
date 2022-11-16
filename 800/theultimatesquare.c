/*
The Ultimate Square
800
https://codeforces.com/contest/1748/problem/A
*/

#include <stdio.h>

int main(){

	int t, n;

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);

		printf("%d\n", n / 2 + n % 2);
	}

	return 0;
}
