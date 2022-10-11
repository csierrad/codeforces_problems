/* 
Anton and Polyhedros
800
https://codeforces.com/problemset/problem/785/A
 */

#include <stdio.h>


int main(){

	int n, cont = 0;
	char c;

	scanf("%d\n", &n);

	while(n--){
		scanf("%c%*s\n", &c);

		switch(c){
			case 'T': cont += 4; break;
			case 'C': cont += 6; break;
			case 'O': cont += 8; break;
			case 'D': cont += 12; break;
			case 'I': cont += 20; break;
		}
	}

	printf("%d\n", cont);
	
	return 0;
}