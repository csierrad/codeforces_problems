/* 
Kefa and First Steps
900
https://codeforces.com/problemset/problem/580/A
 */

#include <stdio.h>

int main(){

	int n, t, prev, tot = 1, max = 0;

	scanf("%d", &t);
	scanf("%d", &prev);
	t--;

	while(t--){
		scanf("%d", &n);
		
		if(prev <= n)
			tot++;
		else{
			if(tot > max) max = tot;
			tot = 1;
		}

		prev = n;
	}

	if(tot > max) max = tot;

	printf("%d\n", max);

	return 0;
}
