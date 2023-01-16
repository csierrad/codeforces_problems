/*
Payment Without Cange 
1000
https://codeforces.com/problemset/problem/1256/A
*/

#include <stdio.h>

void solve(){

	int i, a, b, n, total;

	scanf("%d %d %d %d", &a, &b, &n, &total);

/* 	if(total / n <= a && total % n <= b) printf("YES\n");
	else printf("NO\n"); */
	
	if(total / n <= a){
		if(total % n <= b) printf("YES\n");
		else printf("NO\n");
	} else{
		if( a * n + b >= total ) printf("YES\n");
		else printf("NO\n");
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
