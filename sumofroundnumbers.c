/* 
Sum of Round Numbers
800
https://codeforces.com/problemset/problem/1352/A
 */

#include <stdio.h>

int main(){

	int t, n, i, cont, aux;

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);

		aux = n;
		cont = 0;
		while(aux % 10 || aux / 10){
			if(aux % 10) cont++;
			aux /= 10;
		}
		printf("%d\n", cont);

		i = 1;
		while(n % 10 || n / 10){
			if(n % 10){
				printf("%d ", (n % 10) * i);
			}

			i *= 10;
			n /= 10;
		}
		printf("\n");
	}

	return 0;
}