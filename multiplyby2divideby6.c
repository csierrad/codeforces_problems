/* 
Multiply by 2, divide by 6
900
https://codeforces.com/problemset/problem/1374/B
 */

#include <stdio.h>

int main(){

	int i = 0, n, t;

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);
		
		for(i = 0; n != 1 && n; i++){
			n = (n % 6 == 0) ? n / 6 : (((n * 2) % 6 == 0) ? n * 2 : 0);
		}

		if(!n) 
			printf("-1\n");
		else 
			printf("%d\n", i);
	}

	return 0;
}