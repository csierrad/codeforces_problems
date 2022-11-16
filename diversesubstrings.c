/*
Diverse Substrings
1400
https://codeforces.com/contest/1748/problem/B
*/

#include <stdio.h>

int main(){

	int i, j, t, n, l, d = 0, aux, total;
	char s[100001];

	scanf("%d", &t);

	while(t--){
		scanf("%d\n%s", &n, s);

		total = 0;

		for(l = 2; l <= 100 && l <= n; l++){
			for(i = 0; i < n - (l - 1); i++){
							
				int dc[10] = {0};
				d = 0;
				

				for(j = 0; j < l; j++){

					if(dc[s[i + j] - '0'] == 0){
						d++;
					}

					dc[s[i + j] - '0'] += 1;

				}

				for(j = 0, aux = 0; j < 10 && dc[j] <= d && aux != l; j++){
					aux += dc[j];
				}

				if(aux == l) total++;
			}
		}

		printf("%d\n", total + n);

	}

	return 0;
}
