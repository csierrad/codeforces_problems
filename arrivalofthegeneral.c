/* 
Arrival of the General
800
https://codeforces.com/problemset/problem/144/A
 */

#include <stdio.h>

int main(){

	int i, n, max = 0, min = 100, max_x = 0, min_x = 0, sol[100];

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%d", &sol[i]);
		if(sol[i] > max){
			max = sol[i];
			max_x = i;
		}
		if(sol[i] <= min){
			min = sol[i];
			min_x = i;
		}
	}

	printf("%d\n", (max_x > min_x) ? max_x + n - min_x - 2 : max_x + n - min_x - 1);

	return 0;
}