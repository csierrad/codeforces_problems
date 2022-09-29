/*
Soldier and Bananas
800
https://codeforces.com/problemset/problem/546/A
*/

#include <stdio.h>

int main(){

	int k, n, w, prize = 0; //init prize, $, number bananas

	scanf("%d %d %d", &k, &n, &w);

	while(w){
		prize = prize + k * w;
		w--;
	}
	(prize - n >= 0) ? printf("%d\n", prize - n) : printf("0\n");

	return 0;
}