/*
Word Capitalization
800
https://codeforces.com/problemset/problem/281/A
*/

#include <stdio.h>
#include <ctype.h>

int main(){

	char str[1001];

	scanf("%s", str);

	printf("%c%s\n", toupper(str[0]), str + 1);

	return 0;
}