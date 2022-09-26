#include <stdio.h>
#include <math.h>

int main(){

	int i = 0, n = 1, m = 0;

	while(!i){
		scanf("%d ", &i);
		if(m == 5){
			n++;
			m = 0;
		}
		m++;
	}
	printf("%d\n", (int)(fabs(3 - n) + fabs(3 - m)));

	return 0;
}