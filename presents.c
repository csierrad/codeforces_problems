/*
Presents
800
https://codeforces.com/problemset/problem/136/A
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int n, m, i, *sol;

	scanf("%d", &n);

	sol = malloc(sizeof(int) * n);

	for(i = 0; i < n; i++){
		scanf("%d ", &m);

		sol[m - 1] = i + 1;
	}

	for(i = 0; i < n; i++){
		printf("%d ", sol[i]);	
	}

	printf("\n");

	return 0;
}