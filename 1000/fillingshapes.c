/*
Filling Shapes
1000
https://codeforces.com/problemset/problem/1182/A
*/

#include <stdio.h>

int main(){

	int n;

	scanf("%d", &n);

	if(n < 2 ||  n % 2 == 1){
		printf("0\n");
		return 0;
	}

	printf("%d\n", 1 << (n / 2));

	return 0;
}
