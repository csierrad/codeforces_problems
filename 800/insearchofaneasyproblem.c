/* 
In Search of an Easy Problem
800
https://codeforces.com/problemset/problem/1030/A
*/

#include <stdio.h>

int main(){

	int n, i;

	scanf("%d", &n);

	while(n--){
		scanf("%d ", &i);

		if(i){
			printf("HARD\n");	
			return 0;
		} 
	}

	printf("EASY\n");

	return 0;
}