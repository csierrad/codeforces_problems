/* 
Buy a Shovel
800
https://codeforces.com/problemset/problem/732/A
 */

#include <stdio.h>

int main(){

	int i, prize, r;

	scanf("%d %d", &prize, &r);

	for(i = 1; ((prize * i) % 10) != r && (prize * i) % 10; i++);

	printf("%d\n", i);

	return 0;
}