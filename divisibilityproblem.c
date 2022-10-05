/* Divisibility problem
800
https://codeforces.com/problemset/problem/1328/A
 */

#include <stdio.h>

int main(){

	int n, a, b;

	scanf("%d", &n);

	while(n--){
		scanf("%d %d", &a, &b);
		printf("%d\n", (a <= b) ? b - a : ((a % b) ? (b * (a / b + 1) - a) : 0));
	}

	return 0;
}