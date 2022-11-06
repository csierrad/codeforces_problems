/*
New Year Candles
1000
https://codeforces.com/problemset/problem/379/A
*/

#include <stdio.h>

int main(){

	int a, b, t;

	scanf("%d %d", &a, &b);

	for(t = a; a / b;){
		t += a / b;
		a = a / b + a % b;
	}

	printf("%d\n", t);

	return 0;
}
