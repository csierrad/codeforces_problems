/*
Olesya and Rodion
1000
https://codeforces.com/problemset/problem/584/A
*/

#include <stdio.h>

int main(){

	int i = 1, n, t;

	scanf("%d %d", &n, &t);

	if(t < 10)
		n--;
	else
		n -= 2;
	
	if(n < 0){
		printf("-1\n");
		return 0;
	}

	printf("%d", t);

	while(n--){
		printf("0");
	}

	printf("\n");

	return 0;
}
