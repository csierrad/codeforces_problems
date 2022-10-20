/* 
Theatre Square
1000
https://codeforces.com/problemset/problem/1/A
 */

#include <stdio.h>

int main(){

	long long int n, m, a, h, w;

	scanf("%lld %lld %lld", &n, &m, &a);

	w = (m % a != 0) ? (m / a) + 1 : m / a;
	h = (n % a != 0) ? (n / a) + 1 : n / a;

	printf("%lld\n", w * h);
	
	return 0;
}