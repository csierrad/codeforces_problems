#include <stdio.h>

int main(){

	int n, sol = 0;
	char str[4];

	scanf("%d\n", &n);
	while(n--){
		scanf("%s", str);
		(str[1] == '+') ? sol++ : sol--;
	}

	printf("%d", sol);
	return 0;
}