/*
Nearly Lucky Number
800
https://codeforces.com/problemset/problem/110/A
*/

#include <stdio.h>
#include <stdint.h>

int main(){

	long long int n;
	int i, cont = 0;

	scanf("%lld", &n);

	for(i = 0; n / 10 != 0 || n % 10 != 0; i++){
		if (n % 10 == 4 || n % 10 == 7){
			cont++;
		}

		n = n / 10;
	}


	if(cont == 4 || cont == 7){
		printf("YES\n");
	}else printf("NO\n");

	return 0;
}