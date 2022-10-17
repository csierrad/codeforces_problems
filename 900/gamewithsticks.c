/* 
Game With Sticks
900
https://codeforces.com/problemset/problem/451/A
 */

#include <stdio.h>

int main(){

	int n, m;

	scanf("%d %d", &n, &m);

	if(n != m){
		if(n < m)
			m = n;
		else
			n = m;
	}

	printf("%s\n", (n * m % 2) ? "Akshat" : "Malvika");

	return 0;
}