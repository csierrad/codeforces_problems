/*
Magnets
800
https://codeforces.com/problemset/problem/344/A
*/

#include <stdio.h>

int main(){

	int i, n, cont = 0, aux = 0;

	scanf("%d", &n);
	
	while(n--){
		scanf("%d", &i);
		if(i != aux){
			cont++;
			aux = i;
		}
	}

	printf("%d\n", cont);

	return 0;
}