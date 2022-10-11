/*
Calculating Function
800
https://codeforces.com/problemset/problem/486/A
*/

#include <stdio.h>

int main(){

	long long int n, i = 1, sol = 0;

	scanf("%lld", &n);

	if(n % 2 == 0){
		printf("%lld\n", n / 2);
	}else printf("%lld\n", n / 2 - n);

	return 0;
}