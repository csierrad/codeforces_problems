/*
Petya and Strings
800
https://codeforces.com/problemset/problem/112/A
*/

#include <stdio.h>
#include <ctype.h>

int main(){
	int i = 0;
	char str1[101];
	char str2[101];

	scanf("%s\n", str1);
	scanf("%s\n", str2);

	while(str1[i]){
		if(tolower(str1[i]) != tolower(str2[i])){
			(tolower(str1[i]) - tolower(str2[i]) > 0) ? printf("1") : printf("-1");
			return 0;
		}	
		i++;
	}

	printf("0");

	return 0;
}