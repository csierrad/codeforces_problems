/*
Watermelon
800
https://codeforces.com/problemset/problem/4/A
*/

#include <stdio.h>

int main()
{
	int i ;
	scanf("%d", &i);

	char *res = (i % 2 == 0 && i > 2) ? "YES" : "NO";

	puts(res);
	
	return 0;
}