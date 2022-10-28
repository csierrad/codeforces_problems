/*
Raising Bacteria
1000
https://codeforces.com/problemset/problem/579/A
*/

#include <stdio.h>

int main(){

	int i, j, x, aux = 0;

	scanf("%d", &x);

	for(i = 0; aux != x; i++){
		for(j = 0; aux + (1 << j) <= x; j++);

		aux += (1 << (j - 1));
	}

	printf("%d\n", i);

	return 0;
}
