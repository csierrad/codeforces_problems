/* 
I Wanna Be the Guy
800
https://codeforces.com/problemset/problem/469/A 
 */


#include <stdio.h>

int a[103],s,p,n,t,c;

int main()
{
	scanf("%d", &n);

	for(t=2; t--;) {
		scanf("%d", &p);

		while(p--) {
			scanf("%d", &c);
			if(!a[c]) {
				a[c] = 1;
				s++;
			}
		}
	}

	puts(s==n?"I become the guy.":"Oh, my keyboard!");

	return 0;
}