/*
Stones on the Table
800
https://codeforces.com/problemset/problem/266/A
*/

#include <stdio.h>

int main(){

	int n, i, cont = 0;
	char str[51], aux;

	scanf("%d", &n);
	scanf("%s", str);

	for(i = 1, aux = str[0]; i < n; i++){
		if(str[i] == aux){
			cont++;
		}else aux = str[i];
	}

	printf("%d\n", cont);

	return 0;
}