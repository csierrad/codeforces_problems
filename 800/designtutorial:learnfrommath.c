/* 
Design Tutorial: Learn from Math
800
https://codeforces.com/problemset/problem/472/A
 */

#include <stdio.h>

int prime(int n){

	int i;

	for(i = 2; i <= n / 2; i++){
		if(!(n % i)) return (0);
	}

	return (1);
}

int main(){

	int n, x, y;

	scanf("%d", &n);
	x = n / 2;
	y = n - x;

	while(prime(x) || prime(y)){
		x--;
		y++;
	}

	printf("%d %d\n", x, y);

	return 0;
}