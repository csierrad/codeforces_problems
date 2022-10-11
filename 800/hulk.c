/* 
Hulk
800
https://codeforces.com/problemset/problem/705/A
 */

#include <stdio.h>

int main(){

	int i, n;
	char hate[] = "I hate ";
	char love[] = "I love ";
	char that[] = "that ";
	char it[] = "it";

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		(i % 2 == 0) ? printf("%s", hate) : printf("%s", love);
		(i == n - 1) ? printf("%s", it) : printf("%s", that);
	}
	printf("\n");

	return 0;
}