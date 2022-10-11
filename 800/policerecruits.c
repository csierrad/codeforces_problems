/* 
Police Recruits
800
https://codeforces.com/problemset/problem/427/A
 */

#include <stdio.h>

int main(){

	int n, i, police = 0, cont = 0;

	scanf("%d", &n);

	while(n--){
		scanf("%d", &i);
		
		(i > 0) ? police += i : police--;

		if(police < 0){
			cont++;
			police = 0;
		}
	}
	
	printf("%d\n", cont);

	return 0;
}