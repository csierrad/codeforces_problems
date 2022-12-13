/*
Bad Ugly Numbers
1000
https://codeforces.com/problemset/problem/1326/A
*/

#include <stdio.h>

int main(){

	int i, t, n;

	scanf("%d", &t);

	while(t--){

		scanf("%d", &n);

		if(n == 1){
			printf("-1\n");
		} else{

			printf("2");

			for(i = 0; i < n - 1; i++){
				printf("3");
			}

			printf("\n");
		}

	}

	return 0;
}
