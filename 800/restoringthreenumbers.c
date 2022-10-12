/* 
Restoring Three Numbers
800
https://codeforces.com/problemset/problem/1154/A
 */

#include <stdio.h>

int main(){

	int i, n[4], max = 0;

	scanf("%d %d %d %d", n, n + 1, n + 2, n + 3);
	
	for(i = 0; i < 4; i++){
		if(n[i] > max) max = n[i];
	}

	for(i = 0; i < 4; i++){
		if(n[i] != max){
			printf("%d ", max - n[i]);
		}
	}
	printf("\n");

	return 0;
}