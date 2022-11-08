/*
Dreamoon and Stairs
1000
https://codeforces.com/problemset/problem/476/A
*/

#include <stdio.h>

int main(){

	int n, m, aux;

	scanf("%d %d", &n, &m);
	aux = n / 2 + n % 2;

	while(aux % m && aux <= n) aux++;

	if(aux == n + 1){
		printf("-1\n");
		return 0;
	}

	printf("%d\n", aux);

	return 0;
}
