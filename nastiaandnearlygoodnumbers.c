/*
Nastia and Nearly Good Numbers
1000
https://codeforces.com/problemset/problem/1521/A
*/

#include <stdio.h>

int main(){

	long long int t, a, b;

	scanf("%lld", &t);

	while(t--){
		scanf("%lld %lld", &a, &b);

		if(b == 1) 
			printf("NO\n");
		else{
			printf("YES\n");
			printf("%lld %lld %lld\n", a, a * b, a * (b + 1));
		}		
	}

	return 0;
}
