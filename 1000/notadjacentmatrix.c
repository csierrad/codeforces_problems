/*
Not Adjacent Matrix
1000
https://codeforces.com/problemset/problem/1520/C
*/

#include <stdio.h>

int main(){

	int i, j, t, n;

	scanf("%d", &t);

	while(t--){
		scanf("%d", &n);

		for(i = 0, j = 1; i < n * n; i++){

			if(n == 2){
				printf("-1\n");
				break;
			}

			printf("%d ", (i % 2 == 0) ? j : j++ + (((n * n) + 1) / 2));
			if((i + 1) % n == 0) printf("\n");
		}

	}

	return 0;
}
