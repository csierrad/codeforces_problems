/* 
Even Odds
900
https://codeforces.com/problemset/problem/318/A
 */

#include <stdio.h>
#include <stdint.h>

int main(){

	long long int n, k;

	scanf("%lld %lld", &n, &k);

	if(k > (n / 2) + (n % 2)){
		printf("%lld\n", 2 * (k - (n / 2) - (n % 2)));
	}else{
		printf("%lld\n", 2 * k - 1);
	}

	return 0;
}