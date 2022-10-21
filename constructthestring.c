/* 
Construct the String
900
https://codeforces.com/problemset/problem/1335/B
 */

#include <stdio.h>

int main(){

	int i, t, n, a, b;
	char sol[2000];

	scanf("%d", &t);

	while(t--){
		scanf("%d %d %d", &n, &a, &b);

		for(i = 0; i < n; i++){
			sol[i] = 'a' + i % b;
		}
		
		sol[i] = 0;
		printf("%s\n", sol);

	}

	return 0;
}