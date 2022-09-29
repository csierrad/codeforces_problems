/*
Drinks
800
https://codeforces.com/problemset/problem/200/B
*/

#include <stdio.h>

int main(){

	int n, i, aux, sum;
	float sol = 0;

	scanf("%d", &n);

	for(i = 0, sum = 0; i < n; i++){
		scanf("%d ", &aux);
		sum = sum + aux;
	}
	
	sol = sum / (float)n;
	printf("%f\n", sol);

	return 0;
}