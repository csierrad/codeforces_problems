/*
Game 23
1000
https://codeforces.com/problemset/problem/1141/A
*/

#include <stdio.h>

int main(){

	int n, m, cnt;

	scanf("%d %d", &n, &m);

	if(m % n != 0){
		printf("-1\n");
		return 0;
	}

	if(m == n){
		printf("0\n");
		return 0;
	}

	m =  m / n;

	for(cnt = 0; m % 2 == 0 || m % 3 == 0;){

		if(m % 3 == 0){
			m /= 3;
			cnt++;
		} else{
			m /= 2;
			cnt++;
		}

		if(m == 1){
			printf("%d\n", cnt);
			return 0;
		}
	}

	printf("-1\n");

	return 0;
}
