/* 
Short Substrings
800
https://codeforces.com/problemset/problem/1367/A
 */

#include <stdio.h>
#include <string.h>

int main(){

	int n, i = 0;
	char str[100];
	
	scanf("%d\n", &n);

	while(n--){
		scanf("%s", str);
		for(i = 0; i < strlen(str); i++){
			if(!(i % 2) || i == strlen(str) - 1) printf("%c", str[i]);
		}
		printf("\n");
	}

	return 0;
}