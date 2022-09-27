#include <stdio.h>

int main(){

	int a, b, t = 0;

	scanf("%d %d", &a, &b);

	while(a <= b){
		t++;
		a = 3 * a;
		b = 2 * b;
	}

	printf("%d\n", t);

	return 0;
}