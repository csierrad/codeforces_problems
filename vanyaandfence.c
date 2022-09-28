#include <stdio.h>

int main(){

	int n, h, width = 0, i;

	scanf("%d %d\n", &n, &h);

	while(n--){
		scanf("%d ", &i);

		if(i > h) width += 2;
		else width++;
	}

	printf("%d\n", width);

	return 0;
}