/* 
Anton and Letters
800
https://codeforces.com/problemset/problem/443/A
 */

#include <stdio.h>

int main(){

	int i, cont, letters = 0;
	char c;

	scanf("{%c", &c);

	while(c != '}'){
		if(c >= 'a' && c <= 'z'){
			letters = letters | 1 << (c - 'a');
		}
		scanf("%c", &c);
	}

	for(i = 0, cont = 0; i < 26; i++){
		if(letters & 1 << i) cont++;
	}

	printf("%d\n", cont);
	
	return 0;
}