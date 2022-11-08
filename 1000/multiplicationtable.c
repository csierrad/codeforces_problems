/*
Multiplication Table
1000
https://codeforces.com/problemset/problem/577/A
*/

#include <stdio.h>

int main(){

	int i, j, n, x, t;

	scanf("%d %d", &n, &x);
	
	for(i = 1; i <= n; i++){
		if(x % i == 0 && x / i <= n) t++;
	}

	printf("%d\n", t);

	return 0;
}
