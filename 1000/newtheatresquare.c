/*
New Theatre Square
1000
https://codeforces.com/problemset/problem/1359/B
*/

#include <stdio.h>

void solve(){

	int i, j, n, m, x, y, s, d;
	char str[1001];

	scanf("%d %d %d %d", &n, &m, &x, &y);

	for(j = 0, s = 0, d = 0; j < n; j++){
		scanf("%s", str);
		for(i = 0; i < m; i ++){
			if(str[i] == '.'){
				if(str[i + 1] == '.') 
					d++;
				else 
					s++;
				i++;
			}
		}
	}
	
	if(x * 2 < y){
		printf("%d\n", (s + d * 2) * x);
	} else{
		printf("%d\n", s * x + d * y);
	}

	return;
}

int main(){

	int t;

	scanf("%d", &t);

	while(t--){
		solve();
	}

	return 0;
}
