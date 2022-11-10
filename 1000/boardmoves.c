/*
Board Moves
1000
https://codeforces.com/problemset/problem/1353/C
*/

#include <stdio.h>

int main(){

	int i, t, n;
	long long int m;

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);

		for(i = 0, m = 0; i < (n / 2); i++){
			m += (((n - (2 * i)) * 2 + ((n - (2 * i)) - 2) * 2)) * (long long int)((n - (2 * i)) / 2);
		}
		
		printf("%lld\n", m);

	}

	return 0;
}
