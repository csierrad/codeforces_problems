/* 
Fox and Snake
800
https://codeforces.com/problemset/problem/510/A
 */

#include <stdio.h>

void hrow(int m){
	while(m--)printf("#");
	printf("\n");

	return;
}

void vrow(int m, int *aux){
	if(*aux == 1){
		while(m-- - 1)printf(".");
		printf("#\n");
		*aux = 0;
	}else{
		printf("#");
		while(m-- - 1)printf(".");
		printf("\n");
		*aux = 1;
	}

	return;
}

int main(){

	int i, aux = 1, n, m;

	scanf("%d %d", &n, &m);

	while(i < n){
		if(!(i % 2)){
			hrow(m);
		}else vrow(m, &aux);
		i++;
	}

	return 0;
}