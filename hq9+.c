/* 
HQ9+
900
https://codeforces.com/problemset/problem/133/A
 */

#include <stdio.h>

int main(){

	int i;
	char c[4] = {'H', 'Q', '9'}, aux;

	scanf("%c", &aux);

	while(aux != 10){
		for(i = 0; i < 4; i++){
			if(c[i] == aux){
				printf("YES\n");
				return 0;
			}
		}
		scanf("%c", &aux);
	}

	printf("NO\n");

	return 0;
}