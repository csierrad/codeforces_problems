/*
Translation
800
https://codeforces.com/problemset/problem/41/A
*/

#include <stdio.h>
#include <string.h>

int main(){

	int i, len;
	char s[101], t[101];

	scanf("%s\n%s", s, t);

	len = strlen(s);

	for(i = 0; i < len; i++){
		if(s[i] != t[len - i - 1]){
			printf("NO\n");
			return 0;
		}
	}

	printf("YES\n");

	return 0;
}