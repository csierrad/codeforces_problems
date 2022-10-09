/* 
I_love_%username%
800
https://codeforces.com/problemset/problem/155/A
 */

#include <stdio.h>

int main(){

	int t, n, cont = 0, max, min;

	scanf("%d", &t);
	scanf("%d", &n);

	max = n;
	min = n;

	while(t--){
		if(n > max){
			max = n;
			cont++;	
		} 
		if(n < min){
			min = n;
			cont++;
		}
		scanf("%d", &n);
	}
	
	printf("%d\n", cont);

	return 0;
}