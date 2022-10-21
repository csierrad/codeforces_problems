/* 
Keyboard
900
https://codeforces.com/problemset/problem/474/A
 */

#include <stdio.h>

int main(){

	int i, j, dir;
	char aux, input[101], keys[] = "qwertyuiopasdfghjkl;zxcvbnm,./";

	scanf("%c\n%s", &aux, input);

	dir = (aux == 'R') ? -1 : 1;

	for(i = 0; input[i]; i++){
		for(j = 0; keys[j]; j++){
			if(input[i] == keys[j]){
				printf("%c", keys[j + dir]);
				break;
			}
		}
	}

	printf("\n");
	
	return 0;
}