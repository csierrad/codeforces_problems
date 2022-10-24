/*
young Physicist
1000
https://codeforces.com/problemset/problem/69/A
*/

#include <stdio.h>

int main(){

	int n, i, j, k, x = 0, y = 0, z = 0;

	scanf("%d", &n);

	while(n--){
		scanf("%d %d %d", &i, &j, &k);
		x += i;
		y += j;
		z += k;
	}

	printf("%s\n", (!x && !y && !z) ? "YES" : "NO");

	return 0;
}
