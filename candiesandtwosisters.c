/* 
Candies and Two Sisters
800
https://codeforces.com/problemset/problem/1335/A
 */

#include <stdio.h>

int main(){

	int n, t;

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);
		if(n > 2){
			printf("%d\n", (n % 2) ? n / 2 : n / 2 - 1);
		}
		else printf("0\n");
	}
	
	return 0;
}
