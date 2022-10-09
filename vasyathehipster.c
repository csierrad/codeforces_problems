/* 
Vasya the Hipster
800
https://codeforces.com/problemset/problem/581/A
 */

#include <stdio.h>

int main(){

	int a, b, diff, same;

	scanf("%d %d", &a, &b);

	diff = (a < b) ? a : b;
	same = (a < b) ? (b - a) / 2 : (a - b) / 2; 

	printf("%d %d\n", diff, same);

	return 0;
}