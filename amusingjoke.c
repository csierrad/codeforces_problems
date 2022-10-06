/* 
Amusing Joke
800
https://codeforces.com/problemset/problem/141/A
 */

#include <stdio.h>
#include <string.h>

int main(){

	int i, j, check[101];
	char guest[101], host[101], letters[101];

	for(i = 0; i < 101; i++) check[i] = 0;

	scanf("%s\n%s\n%s", guest, host, letters);

	for(i = 0; i < strlen(guest); i++){
		for(j = 0; j < strlen(letters); j++){
			if(guest[i] == letters[j] && !check[j]){
				check[j] = 1;
				break;
			}
			if(j == strlen(letters) - 1){
				printf("NO\n");
				return 0;
			}
		}
	}

	for(i = 0; i < strlen(host); i++){
		for(j = 0; j < strlen(letters); j++){
			if(host[i] == letters[j] && !check[j]){
				check[j] = 1;
				break;
			}
			if(j == strlen(letters) - 1){
				printf("NO\n");
				return 0;
			}
		}
	}

	for(i = 0; i < strlen(letters); i++){
		if(!check[i]){
			printf("NO\n");
			return 0;
		}
	}

	printf("YES\n");

	return 0;
}