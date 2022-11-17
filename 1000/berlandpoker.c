/*
Berland Poker
1000
https://codeforces.com/problemset/problem/1359/A
*/

#include <stdio.h>

int main(){

	int t, n, m, k, res;

	scanf("%d", &t);

	while(t--){
		scanf("%d %d %d", &n, &m, &k);

		if((n / k) > m){
			printf("%d\n", m);
		} else{

			res = (n / k) - ((m - n / k) / (k - 1));

			if(((m - n / k) % (k - 1))) res--;
			
			printf("%d\n", res);
		}
	}	

	return 0;
}
