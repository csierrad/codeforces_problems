/* 
Pangram
800
https://codeforces.com/problemset/problem/520/A
 */

#include <stdio.h>
#include <ctype.h>

int main(){

	int n, letters = 0;
	char l;

	scanf("%d\n", &n);

	while(n--){
		scanf("%c", &l);
		l = tolower(l);
		letters = letters | 1 << (l - 'a');
	}

	printf("%s\n", (letters == 67108863) ? "YES" : "NO");

	return 0;
}