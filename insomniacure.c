/* 
Insomnia cure
800
https://codeforces.com/problemset/problem/148/A
 */

#include <stdio.h>

int main(){

	int i, j, n, cont = 0, a[4];

	for(i = 0; i < 4; i++){
		scanf("%d", &a[i]);
	}
	
	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		for(j = 0; j < 4; j++){
			if(i % a[j] == 0){
				break;
			}
			if(j == 3) cont++;
		}
	}

	printf("%d\n", n - cont);

	return 0;
}