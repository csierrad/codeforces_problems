/*
New year transportation
1000
https://codeforces.com/problemset/problem/500/A
*/

#include <stdio.h>

int main(){

	int i, j, t, a;

	scanf("%*d %d", &t);

	scanf("%d", &a);

	for(i = 1; i < t; i++){

		while(--a){
			scanf("%*d");
			i++;
		}
	
		scanf("%d", &a);
	}

	printf((i == t) ? "YES\n" : "NO\n");

	return 0;
}