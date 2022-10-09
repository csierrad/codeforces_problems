/* 
New Year and Hurry
800
https://codeforces.com/problemset/problem/750/A
 */

#include <stdio.h>

int main(){

	int i, n, k, aux, total = 240;

	scanf("%d %d", &n, &k);

	for(i = 1, aux = 0; i <= n; i++){
		aux = aux + 5 * i;
		if(total - k - aux < 0){
			break;
		}
	}

	printf("%d\n", i - 1);

	return 0;
}