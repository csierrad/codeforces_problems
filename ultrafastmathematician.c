/*
Ultra-Fast Mathematician
800
https://codeforces.com/problemset/problem/61/A
 */

#include <stdio.h>
#include <string.h>

int main()
{

	int i = 0;
	char n[101], m[101];

	scanf("%s\n%s", n, m);
	
	while(i < strlen(n)){
		((n[i] -'0') ^ (m[i] - '0')) ? printf("1") : printf("0");
		i++;
	}

	printf("\n");

	return 0;
}