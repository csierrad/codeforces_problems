/*
Traffic Lights
1000
https://codeforces.com/contest/1744/problem/C
*/

#include <stdio.h>

int main(){

	int i, j, t, n, max, cnt;
	char c, s[200001];

	scanf("%d", &t);

	while(t--){
		scanf("%d %c %s", &n, &c, s);

		for(i = max = 0; i < n; i++){
			if(s[i] == c){
				for(j = cnt = 0; s[i + j] != 'g'; j++, cnt++){
					if((j + i) == (n - 1)) j = -i - 1;
				}

				if(cnt > max) max = cnt;
				i += cnt;
			}
		}

		printf("%d\n", max);
	}

	return 0;
}