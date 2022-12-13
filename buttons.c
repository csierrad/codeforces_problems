/*
Buttons 
1000
https://codeforces.com/problemset/problem/268/B
*/

#include <stdio.h>

int main(){

	int i, n, res;

	scanf("%d", &n);

	res = (n * (n + 1)) / 2;

	for(i = 1; i <= n - 2; i++){
		res += i * (n - 1 - i);
	}

	printf("%d\n", res);

	return 0;
}
