/*
Expression
1000
https://codeforces.com/problemset/problem/479/A
*/

#include <stdio.h>

int main(){

	int i, n[3], ones;

	scanf("%d\n%d\n%d", &n[0], &n[1], &n[2]);

	for(i = 0, ones = 0; i < 3; i++){
		if(n[i] == 1) ones++; 
	}

	switch(ones){
		case 0: {
			printf("%d\n", n[0] * n[1] * n[2]);
			return 0;
		}	
		
		case 1:{
			for(i = 0; i < 3; i++){
				if(n[i] == 1){
					if(i == 1){
						if(n[0] < n[2])
							printf("%d\n", (n[0] + n[i]) * n[2]);
						else
							printf("%d\n", (n[2] + n[i]) * n[0]);
					}else{
						printf("%d\n", (n[i] + n[1]) * n[3 - 1 - i]);
					}

					return 0;
				}
			}
		}

		case 2:{
			if(n[1] == 1){
				for(i = 0; i < 3; i++){
					if(n[i] != 1) printf("%d\n", 2 * n[i]);
				}
				
				return 0;
			}			
		}

		default:
			printf("%d\n", n[0] + n[1] + n[2]);

	}

	return 0;
}
