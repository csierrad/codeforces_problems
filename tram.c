#include <stdio.h>

int main(){

	int n, pass[2], aux = 0, sol = 0;

	scanf("%d", &n);

	while(n--){
		scanf("%d %d", &pass[0], &pass[1]);
		aux = aux - pass[0] + pass[1];
		if(aux > sol) sol = aux;
	}

	printf("%d\n", sol);

	return 0;
}