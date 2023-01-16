/*
Lovely Palindromes
1000
https://codeforces.com/problemset/problem/688/B
*/

#include <stdio.h>
#include <string.h>

int main(){

	int i;
	char n[2000002];

	scanf("%s", n);

	printf("%s", n);

	for(i = strlen(n) - 1; i >= 0; i--){
		printf("%c", n[i]);
	}

	printf("\n");

	return 0;
};