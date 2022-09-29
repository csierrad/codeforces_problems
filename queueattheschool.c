/*
Queue at the School
800
https://codeforces.com/problemset/problem/266/B
*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int n, t, i;
	char *str, aux;

	scanf("%d %d", &n, &t);

	str = malloc(sizeof(char) * n + 1);

	scanf("%s", str);
	
	while(t--){
		for(i = 0; i < n; i++){
			if(str[i] == 'B' && str[i + 1] == 'G' && i + 1 <= n){
				aux = str[i];
				str[i] = str[i + 1];
				str[i + 1] = aux;
				i++;
			}
		}
	}

	printf("%s\n", str);

	return 0;
}