/*
Road to Zero
1000
https://codeforces.com/problemset/problem/1342/A
*/

#include <stdio.h>
#include <stdint.h>


int main(){

	long long int t, x, y, a, b;

	scanf("%lld", &t);

	while(t--){
		scanf("%lld %lld %lld %lld", &x, &y, &a, &b);

		if(2 * a < b)
			printf("%lld\n", (x + y) * a);
		else
			printf("%lld\n", (x < y) ? ( y - x) * a + x * b : ( x - y) * a + y * b);
	}
	
	return 0;
}