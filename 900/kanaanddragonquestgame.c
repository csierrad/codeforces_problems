/*
Kana and Dragon Quest game
900
https://codeforces.com/problemset/problem/1337/B
*/

#include <stdio.h>

int main(){

	int t, h, n, m;

	scanf("%d", &t);

	while(t--){
		scanf("%d %d %d", &h, &n, &m);

		for(; h > 20 && n; n--) h = h / 2 + 10; 

		if(h - (m * 10) <= 0)
			printf("YES\n");
		else
			printf("NO\n");		

	}

	return 0;
}
