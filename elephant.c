#include <stdio.h>

int main(){

	int x, i, sol = 0;

	scanf("%d", &x);

	for(i = 5; i; i--){
		if(x / i > 0){
			sol = sol + x / i; 
			x = x % i;
		}
	}

	printf("%d\n", sol);

	return 0;
}