/*
K-Divisible Sum
1000
https://codeforces.com/problemset/problem/1476/A
*/

#include <stdio.h>

int main(){

	long long int t, n, k, c;

	scanf("%lld", &t);

	while(t--){
		scanf("%lld %lld", &n, &k);

		c = (n + k - 1) / k;

		k *= c;

		printf("%lld\n", (k + n - 1 )/ n);
	}

	return 0;
}
