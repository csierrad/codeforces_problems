/* 
Hit the Lottery
800
https://codeforces.com/problemset/problem/996/A
 */


#include <stdio.h>

int main(){

	int i, cont, n, bills[5] = {100, 20, 10, 5, 1};

	scanf("%d", &n);

	for(i = 0, cont = 0; i < 5; i++){
		cont += n / bills[i];
		n = n % bills[i];
	}

	printf("%d\n", cont);

	return 0;
}