/* 
Games
800
https://codeforces.com/problemset/problem/268/A
 */

#include <stdio.h>

int main(){

	int i, j, n, cont, teams[30][2];

	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d %d", &teams[i][0], &teams[i][1]);
	}

	for(i = 0, cont = 0; i < n; i++){
		for(j = 0; j < n; j++ ){
			if(teams[i][0] == teams[j][1]) cont++;
		}
	}

	printf("%d\n", cont);

	return 0;
}