/*
Lucky Division
1000
https://codeforces.com/problemset/problem/122/A
*/

#include <stdio.h>

int main(){

	int i, n, ln[] = {4, 7, 47, 74, 444, 447, 477, 744, 774, 777};

	scanf("%d", &n);

	for(i = 0; i < 7; i++){
		if(n % ln[i] == 0){
			printf("YES\n");
			return 0;
		}
	}

	printf("NO\n");

	return 0;
}
