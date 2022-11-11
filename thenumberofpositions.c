/*
The number of positions
1000
https://codeforces.com/problemset/problem/124/A
*/

#include <stdio.h>

int main(){

	int i, n, a, b;

	scanf("%d %d %d", &n, &a, &b);

	for(i = 0; i < n - a && i <= b; i++);

	printf("%d\n", i);

	return 0;
}
